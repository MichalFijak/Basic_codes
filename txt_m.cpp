#include <iostream>
#include <fstream>
#include <conio.h>
#include "txt.h"
using namespace std;

int main()
{
    Tekst tekst1;
    tekst1.czytaj_dane();
    tekst1.zapisz_dane();
    tekst1.czytaj_dane_plik();
    getch();
    return 0;
}
