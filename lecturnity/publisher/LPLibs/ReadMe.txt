========================================================================
       MICROSOFT FOUNDATION CLASS BIBLIOTHEK : LPLibs
========================================================================


Diese LPLibs-DLL hat der Klassen-Assistent f�r Sie erstellt. Die DLL zeigt 
die prinzipielle Anwendung der Microsoft Foundation Classes und dient Ihnen 
als Ausgangspunkt f�r die Erstellung Ihrer eigenen DLLs.

Diese Datei enth�lt die Zusammenfassung der Bestandteile aller Dateien, die 
Ihre LPLibs-DLL bilden.

LPLibs.dsp
    Diese Datei (Projektdatei) enth�lt Informationen auf Projektebene und wird zur
    Erstellung eines einzelnen Projekts oder Teilprojekts verwendet. Andere Benutzer k�nnen
    die Projektdatei (.dsp) gemeinsam nutzen, sollten aber die Makefiles lokal exportieren.

LPLibs.h
	Dies ist die Haupt-Header-Datei f�r die DLL, in der die Klasse 
	CLPLibsApp deklariert ist.

LPLibs.cpp
	Hierbei handelt es sich um die Haupt-Quellcodedatei der DLL. Diese enth�lt 
	die Klasse CLPLibsApp.


LPLibs.rc
	Hierbei handelt es sich um eine Auflistung aller Ressourcen von Microsoft Windows, die 
	vom Programm verwendet werden. Sie enth�lt die Symbole, Bitmaps und Cursors, die im 
	Unterverzeichnis RES abgelegt sind. Diese Datei l�sst sich direkt in Microsoft
	Visual C++ bearbeiten.

LPLibs.clw
    Diese Datei enth�lt Informationen, die vom Klassen-Assistenten verwendet wird, um bestehende
    Klassen zu bearbeiten oder neue hinzuzuf�gen.  Der Klassen-Assistent verwendet diese Datei auch,
    um Informationen zu speichern, die zum Erstellen und Bearbeiten von Nachrichtentabellen und
    Dialogdatentabellen ben�tigt werden und um Prototyp-Member-Funktionen zu erstellen.

res\LPLibs.rc2
    Diese Datei enth�lt Ressourcen, die nicht von Microsoft Visual C++ bearbeitet wurden.
	In diese Datei werden alle Ressourcen abgelegt, die vom Ressourcen-Editor nicht bearbeitet 
	werden k�nnen.

LPLibs.def
    Diese Datei enth�lt Informationen �ber die DLL, die f�r das Ausf�hren unter
	Microsoft Windows erforderlich sind. Es werden Parameter definiert, wie beipielsweise
	der Name und die Beschreibung der DLL. Au�erdem werden die von der DLL exportierten
	Funktionen angegeben.

/////////////////////////////////////////////////////////////////////////////
Andere Standarddateien:

StdAfx.h, StdAfx.cpp
    	Mit diesen Dateien werden vorkompilierte Header-Dateien (PCH) mit der Bezeichnung 
	LPLibs.pch und eine vorkompilierte Typdatei mit der Bezeichnung StdAfx.obj
	erstellt.

Resource.h
    	Dies ist die Standard-Header-Datei, die neue Ressourcen-IDs definiert.
    	Microsoft Visual C++ liest und aktualisiert diese Datei.

/////////////////////////////////////////////////////////////////////////////
Weitere Hinweise:

Der Klassen-Assistent f�gt "ZU ERLEDIGEN:" im Quellcode ein, um die Stellen anzuzeigen, 
an denen Sie Erweiterungen oder Anpassungen vornehmen k�nnen.

/////////////////////////////////////////////////////////////////////////////
