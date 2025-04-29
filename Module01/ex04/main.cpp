/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:07:59 by mawada            #+#    #+#             */
/*   Updated: 2025/04/25 14:08:21 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// Funktion zum Ersetzen aller Vorkommen von s1 durch s2 im gegebenen Inhalt
std::string replaceAllOccurrences(const std::string& content, const std::string& s1, const std::string& s2) {
    if (s1.empty()) // Verhindert eine Ersetzung eines leeren Strings (würde eine Endlosschleife verursachen)
        return content;

    std::string result;     // Ergebnis-String nach den Ersetzungen
    size_t pos = 0;         // Aktuelle Position im Inhalt
    size_t found;           // Index des gefundenen Substrings

    // Schleife zum Finden und Ersetzen aller Vorkommen von s1
    while ((found = content.find(s1, pos)) != std::string::npos) {
        result.append(content, pos, found - pos);  // Anhängen der Zeichen vom aktuellen Pos bis zum gefundenen Match
        result.append(s2);                         // Anhängen des Ersetzungs-Strings
        pos = found + s1.length();                 // Position weiter auf den nächsten möglichen Treffer verschieben
    }

    // Anhängen der restlichen Zeichen nach dem letzten Treffer
    result.append(content, pos, std::string::npos);
    return result; // Zurückgeben des vollständig ersetzten Inhalts
}

int main(int argc, char** argv) {
    // Überprüfen, ob die richtige Anzahl an Argumenten übergeben wurde
    if (argc != 4) {
        std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl;
        return 1; // Fehlerausgabe bei falscher Benutzung
    }

    std::string filename = argv[1]; // Dateiname zum Lesen
    std::string s1 = argv[2];       // String zum Suchen
    std::string s2 = argv[3];       // String zum Ersetzen

    std::ifstream infile(filename.c_str()); // Eingabedatei öffnen
    if (!infile) {
        std::cerr << "Error: Cannot open input file." << std::endl;
        return 1; // Fehlerausgabe, falls Datei nicht geöffnet werden kann
    }

    // Den gesamten Inhalt der Datei in einen String einlesen
    std::string content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
    infile.close(); // Eingabedatei schließen

    // Ersetzen aller Vorkommen von s1 mit s2
    std::string replacedContent = replaceAllOccurrences(content, s1, s2);

    // Falls keine Ersetzung stattgefunden hat, keine Ausgabedatei erstellen
    if (replacedContent == content) {
        std::cout << "Keine Ersetzungen vorgenommen. Die Datei bleibt unverändert." << std::endl;
        return 0; // Erfolgreicher Abschluss ohne Ausgabedatei
    }

    // Ausgabedatei öffnen (mit Suffix ".replace")
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile) {
        std::cerr << "Error: Cannot open output file." << std::endl;
        return 1; // Fehlerausgabe, falls Ausgabedatei nicht geöffnet werden kann
    }

    outfile << replacedContent; // Ersetzten Inhalt in die neue Datei schreiben
    outfile.close();            // Ausgabedatei schließen

    std::cout << "Ersetzungen vorgenommen und in " << filename + ".replace" << " gespeichert." << std::endl;

    return 0; // Erfolgreiche Ausführung
}
