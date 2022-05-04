#include <iostream>
#include <stdlib.h>
#include <string.h>
#define DIM 100
using namespace std;

struct libreria
{
    string codice;
    string titolo;
    string autore;
    string editore;
    int anno;
    double prezzo;
    string tag;
};

libreria vetl[DIM];

libreria inserisci()
{
    libreria inserire;

    cout<<"Inserire il codice ISBN del libro: ";
    cin>>inserire.codice;

    cout<<"Inserire il titolo del libro: ";
    cin>>inserire.titolo;

    cout<<"Inserire l' autore del libro: ";
    cin>>inserire.autore;

    cout<<"Inserire l' editore del libro: ";
    cin>>inserire.editore;

    cout<<"Inserire l' anno di pubblicazione del libro: ";
    cin>>inserire.anno;

    cout<<"Inserire il prezzo del libro: ";
    cin>>inserire.prezzo;

    cout<<"Inserire il tag del genere letterario: ";
    cin>>inserire.tag;

    return inserire;
}
void catalogo()
{

}
void cancella()
{

}
void ricerca()
{

}
void modifica()
{

}
void menu()
{
    int evo=0;
    int scegliere;
    do{
        cout<<"1| Inserisci libri";
        cout<<"\n2| Visualizza catalogo";
        cout<<"\n3| Cancella libro";
        cout<<"\n4| Ricerca";
        cout<<"\n5| Modifica";
        cout<<"\n6| Uscita";
        cout<<endl;
        cout<<"\nScegliere una voce dall'elenco: ";
        cin>>scegliere;

        switch(scegliere){
            case 1:
                vetl[evo] = inserisci();
                evo++;
                break;
            case 2:
                catalogo();
                break;
            case 3:
                cancella();
                break;
            case 4:
                ricerca();
                break;
            case 5:
                modifica();
                break;
            case 6:
                cout<<"CHIUSURA PROGRAMMA";
                }
}while(scegliere!=6);
}
int main()
{

    menu();
    return 0;
}
