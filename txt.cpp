#include <iostream>
#include <fstream>
#include <conio.h>
#include "txt.h"
using namespace std;

void Tekst::czytaj_dane()
{
 cout<<"Podaj imie i nazwisko"<<endl;
 cin.getline(dane,sizeof(dane));
}
void Tekst::zapisz_dane()
{
    cout<<"Zapisz dane do pliku"<<endl;
    ofstream plik_zapis("dane.txt");
    plik_zapis<<dane<<endl;
    plik_zapis.close();
}

void Tekst::czytaj_dane_plik()
{
    cout<<"Otwieramy plik"<<endl;
    ifstream plik_odczyt("dane.txt");
    while (!plik_odczyt.eof())
    {
    plik_odczyt>>dane1;
    cout<<dane1<<" ";
    }
    plik_odczyt.close();
}
