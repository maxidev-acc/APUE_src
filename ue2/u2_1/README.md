

* Überarbeitung Src Code von u1_1


  Durchgeführte Schritte:

    Build Prozess Implementierung
        Der gesamte Buildprozess wird mit einem Makefile aufgesetzt. mit den Flags -Wall -Wextra -std=c++17 werden alle Compilert Warnungen ausgegeben.
        Alle Compilerwarnungen wurden beseitigt.

    Umbenennung Variablen
        Die Variablen des Programms wurden mit Aussagekräftigen Namen belegt. Vor allem Iterator-Variablen wurden von zB i und k auf index umbenannt innerIndex umbennant.

    Performance Optimierung
        Vermeiden von unnötigen Kopien urch umstellung von call bei value auf call by reference bei komplexen Datentypen (string) für die Zielfunktionen

    Erweiterte Auslagerung von Funktionalitäten in Funktionen:
        Wenig Code im Main Programm. Alles in Funktionen gekappselt mit passenden Namen () 
      

