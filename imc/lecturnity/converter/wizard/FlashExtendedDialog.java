package imc.lecturnity.converter.wizard;

import java.awt.*;
import java.awt.event.*;
import java.io.IOException;
import javax.swing.*;

import imc.epresenter.filesdk.util.Localizer;
import imc.lecturnity.util.ui.LayoutUtils;
import imc.lecturnity.util.wizards.ButtonPanel;
import imc.lecturnity.util.wizards.WizardButton;
import imc.lecturnity.util.wizards.WizardPanel;


/**
 * Base class for (Flash-related) dialog things. Like any kind of 
 * extended dialog.
 * Provides frame/panel and ok and cancel buttons.
 */
///public abstract class FlashExtendedDialog extends JDialog implements ActionListener
public class FlashExtendedDialog extends JDialog implements ActionListener
{
   protected static Localizer g_Localizer = null;
   static 
   {
      try
      {
         g_Localizer = new Localizer(
            "/imc/lecturnity/converter/wizard/FlashSettingsWizardPanel_", "en");
      }
      catch (IOException exc)
      {
         JOptionPane.showMessageDialog(null, "Could not open Locale database!",
                                       "Error", JOptionPane.ERROR_MESSAGE);
         System.exit(1);
      }
   }
   
   
   protected PublisherWizardData m_pwData;
   
   private FlashTemplateDialog m_FlashTemplateDialog;
   private FlashStandardNavigationDialog m_FlashStandardNavigationDialog;
 
 
   public FlashExtendedDialog(Frame parent, PublisherWizardData pwData, String strDialogTitle)
   {
      super(parent, strDialogTitle, true);
   
      m_pwData = pwData;

      m_FlashTemplateDialog = new FlashTemplateDialog(m_pwData, g_Localizer);
      m_FlashStandardNavigationDialog = new FlashStandardNavigationDialog(m_pwData, g_Localizer);
      
      initGui();
   
      this.pack();
      
      //this.setDefaultCloseOperation(HIDE_ON_CLOSE); // is the default

      LayoutUtils.centerWindow(this, parent);
   }
   
   /**
    * Here only necessary for catching events from "Ok" and "Cancel".
    * Subclasses may have their own handler for own components.
    */
   public void actionPerformed(ActionEvent evt)
   {
      String cmd = evt.getActionCommand();
      if (cmd.equals(WizardPanel.OK))
      {
         boolean bDoNormalHide = executeOk();
        
         if (bDoNormalHide)
            this.hide();
         // else error/warning was displayed: stay open
      }
      else if (cmd.equals(WizardPanel.CANCEL))
      {
         // do not change the WizardData object
         
         this.hide();
      }
   }
   
   private void initGui()
   {
      Container container = getContentPane();
      container.setLayout(new BorderLayout());

      ButtonPanel bp = new ButtonPanel(false);
      WizardButton okButton = new WizardButton(WizardPanel.OK);
      okButton.setMnemonic(WizardPanel.MNEM_OK);
      okButton.setDefaultCapable(true);
      okButton.addActionListener(this);
      bp.addRightButton(okButton);
      bp.addRightButton(Box.createHorizontalStrut(WizardPanel.BUTTON_SPACE_X));
      WizardButton cancelButton = new WizardButton(WizardPanel.CANCEL);
      cancelButton.setMnemonic(WizardPanel.MNEM_CANCEL);
      cancelButton.addActionListener(this);
      bp.addRightButton(cancelButton);

      container.add(bp, BorderLayout.SOUTH);
      
   
      // The center panel with the tabbed pane
      JPanel pnlCenter = new JPanel();
      pnlCenter.setPreferredSize(new Dimension(480, 360));
      pnlCenter.setBorder(BorderFactory.createEmptyBorder(7,7,0,7));
   
      pnlCenter.setLayout(new BorderLayout());

      JTabbedPane pnTabbed = new JTabbedPane(JTabbedPane.TOP);
      pnlCenter.add(pnTabbed, BorderLayout.CENTER);
      
      container.add(pnlCenter, BorderLayout.CENTER);
      
    
///      JPanel pnlInner = createContentPanel();
///      String strTabTitle = getTabTitle();
///
///      pnTabbed.addTab(strTabTitle, pnlInner);
      
      JPanel pnlTemplate = m_FlashTemplateDialog.createContentPanel();
      String strTabTitle = m_FlashTemplateDialog.getTabTitle();
      pnTabbed.addTab(strTabTitle, pnlTemplate);

      JPanel pnlStandardNavigation = m_FlashStandardNavigationDialog.createContentPanel();
      strTabTitle = m_FlashStandardNavigationDialog.getTabTitle();
      pnTabbed.addTab(strTabTitle, pnlStandardNavigation);

      // SLIDESTAR or PSP design? --> Disable "Template" tab.
      if ( (m_pwData.GetProfiledSettings().GetIntValue("iFlashTemplateType") == PublisherWizardData.TEMPLATE_FLASH_SLIDESTAR)
         || (m_pwData.GetProfiledSettings().GetIntValue("iFlashTemplateType") == PublisherWizardData.TEMPLATE_FLASH_PSP) )
      {
         pnTabbed.setEnabledAt(0, false);
         pnTabbed.setSelectedIndex(1);
      }
//      // (Bugfix 5326) New Flash Player: No Template configuration available so far - only the "Disable LEC logo" option
//      // --> preselect "Standard Navigation" tab
//      if (m_pwData.GetProfiledSettings().GetIntValue("iFlashTemplateType") == PublisherWizardData.TEMPLATE_FLASH_FLEX) {
//         pnTabbed.setSelectedIndex(1);
//      }
   }
   
///   protected abstract JPanel createContentPanel();
   
///   protected abstract boolean executeOk();
   protected boolean executeOk()
   {
      boolean bIsOk = true;

      if (bIsOk)
        bIsOk = m_FlashStandardNavigationDialog.executeOk();
      if (bIsOk)
        bIsOk = m_FlashTemplateDialog.executeOk();
        
      return bIsOk;
   }

///   protected abstract String getTabTitle();
}