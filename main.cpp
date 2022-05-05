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

    cout<<endl;
    cout<<endl;

    return inserire;
}
//libreria cat[evo];
libreria catalogo(libreria vetl, int evo)
{
    libreria cat[evo];
    int n=evo;
    for(int i = 0; i<n; i++)
    {
        cout<<cat[i].codice<<"   "<<cat[i].titolo<<"/"<<cat[i].autore<<"/"<<cat[i].editore<<"/"<<cat[i].anno<<"/"<<cat[i].prezzo<<"/"<<cat[i].tag;
        cout<<endl;
    }
    return cat;
}
void cancella(int evo)
{
    string cod_tempo;
    int sco;

    catalogo(vetl, n);

    cout<<"Inserire codice ISBN del libro da eliminare dal catalogo: ";
    cin>>cod_tempo;

    sco=ricercaCodice(libri, n, codice);

    if(cod_tempo!=-1)
    {
        for(int i=cod_tempo; i<n-1; i++)
        {
            vetl[i]=vetl[i+1];
        }
        n--;
    }
    else{
        cout<<"Codice ISBN non trovato";
        cout<<endl;
    }
}
void ricerca(int evo)
{
    string cod_tempo;
    int sco;

    cout<<"Inserire codice ISBN del libro da trovare: ";
    cin>>cod_tempo;

    for(int i = 0; i<n; i++)
    {
        if(cod_tempo==vetl[i].titolo)
        {
            sco=i;
            if(indice != -1)
            {
                cout<<cat[sco].codice<<"   "<<cat[sco].titolo<<"/"<<cat[sco].autore<<"/"<<cat[sco].editore<<"/"<<cat[sco].anno<<"/"<<cat[sco].prezzo<<"/"<<cat[sco].tag;
                cout<<endl;
            }
                else
                {
                    cout<<"Codice ISBN non trovato";
                    cout<<endl;
                }
        }
    }


}
void modifica(int evo)
{
    string cod_tempo;
    int sco;

    libreria inserire;
    catalogo(vetl, n);

    cout<<"Inserire codice ISBN del libro da modificare: ";
    cin>>cod_tempo;

    for(int i = 0; i<n; i++)
    {
        if(cod_tempo==vetl[i].titolo)
        {
            sco=i;
            if(indice != -1)
            {
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

                    cout<<endl;
                    cout<<endl;
            }
                    else
                {
                    cout<<"Codice ISBN non trovato";
                    cout<<endl;
                }
        }
    }
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
                catalogo(vetl, evo);
                break;
            case 3:
                cancella(evo);
                break;
            case 4:
                ricerca(evo);
                break;
            case 5:
                modifica(evo);
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
