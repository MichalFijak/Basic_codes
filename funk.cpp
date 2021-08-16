#include <iostream>
#include <iomanip>
#include <conio.h>
#include "funk.h"
float x;
const int n=6;
int liczby[n];

void Sortowanie::czytaj_dane()
{
    for(int i=0;i<n;i++)
{
        cout<<"Wprowadz liczbe "<<i+1<<endl;
        cin>>x;
       liczby[i]=x;

}
    cout<<"liczby nieposortowane: "<<endl;
    for(int i=0;i<n;i++){
        cout<<liczby[i]<<". ";
    }
    cout<<endl;
}

void Sortowanie::przetworz_dane()
{
    int i,j,x;

    for (i=1;i<=n-1;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            if (liczby[j-1]>liczby[j])
            {
                x=liczby[j-1];
                liczby[j-1]=liczby[j];
                liczby[j]=x;
            }
        }
    }
    cout<<endl;
}
void Sortowanie::wyswietl_wynik()
{
    cout<<"Liczby posortowane"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<liczby[i]<<". ";

    }
        cout<<endl;
}
