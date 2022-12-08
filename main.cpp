#include <iostream>

using namespace std;

int main(){
    double zahl1, zahl2, ergebnis;    //variablen für die Zahlen und das Ergebnis
    char rechenzeichen;               //variable für das Rechenzeichen

    cout << "Geben Sie die Zahlen ein: "; //Eingabeaufforderung
    cin >> zahl1 >> rechenzeichen >> zahl2;  //Eingabe der Zahlen

    switch(rechenzeichen){  //Auswahl des Rechenzeichen
        case '+': ergebnis = zahl1 + zahl2; break; //Addition
        case '-': ergebnis = zahl1 - zahl2; break; //Subtraktion
        case '*': ergebnis = zahl1 * zahl2; break; //Multiplikation
        case '/': ergebnis = zahl1 / zahl2; break; //Division
        default: cout << "Falsches Rechenzeichen!"; //Fehlermeldung
    }
    //aufgabe komplett ausgeben
    cout << zahl1 << " " << rechenzeichen << " " << zahl2 << " = " << ergebnis;
}

//
// Created by E̸i̸n̸s̸P̸o̸m̸m̸e̸s̸#0001 on 08.12.2022.
//
