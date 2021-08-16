#include <iostream>
#include <iomanip>
#include <conio.h>
#include "funk.h"





using namespace std;

int main()
{
    Sortowanie babelki;
        babelki.czytaj_dane();
        babelki.przetworz_dane();
        babelki.wyswietl_wynik();
    getch();
    return 0;
}
