#include <iostream>
#include <cstdlib>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla ()
{
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla ()
{
    // OMITIDO
}

void ListaDupla::insereInicio (int val)
{
    NoDuplo *p = new NoDuplo ();
    p->setInfo (val);
    p->setProx (primeiro);
    p->setAnt (NULL);

    if (n == 0)
    {
        ultimo = p;
    }
    else
    {
        primeiro->setAnt (p);
    }
    primeiro = p;
    n = n + 1;
}

void ListaDupla::imprime ()
{
    cout << "[";
    for (NoDuplo *p = primeiro; p != NULL; p = p->getProx ())
    {
        cout << p->getInfo ();
        if (p->getProx () != NULL)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// ----------------------------------------------------------------------------
//Q3

void ListaDupla::removeMaior()
{
    if(primeiro != NULL)
    {
        NoDuplo *maior = primeiro;
        NoDuplo *p = primeiro ->getProx();
        while(p!=NULL){
            if(p->getInfo()>maior->getInfo()){
                maior=p;
            }
            p=p->getProx();

        }
        if(n==1)
            primeiro = ultimo = NULL;
        else if(maior==primeiro){
            primeiro = primeiro->getProx();
            primeiro->setAnt(NULL);

        }
        else if (maior ==ultimo){
            ultimo =maior->getAnt();
            ultimo->setProx(NULL);
        }
        else{
            maior->getAnt()->setProx(maior->getProx());
            maior->getProx()->setAnt(maior->getAnt());
        }
        delete maior;
        n=n-1;
    }
    else
            cout<<"Lista vazia nao é possivel remover"<<endl;
}

//-Q3
// ----------------------------------------------------------------------------
