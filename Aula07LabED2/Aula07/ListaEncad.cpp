#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    cout << "Criando objeto ListaEncad" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaEncad::~ListaEncad()
{
    cout << "Destruindo objeto ListaEncad" << endl;
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaEncad::busca(int val)
{
    No *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

int ListaEncad::get(int k)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    else
        return p->getInfo();
}

void ListaEncad::set(int k, int val)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}


void ListaEncad::insereInicio(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;

    n++;
    if(n == 1) ultimo = p;
}

void ListaEncad::insereFinal(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    if(ultimo != NULL) ultimo->setProx(p);
    ultimo = p;

    n++;
    if(n == 1) primeiro = p;
}

void ListaEncad::removeInicio()
{
    No* p;
    if(primeiro != NULL)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;

        n--;
        if(n == 0) ultimo = NULL;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::removeFinal()
{
    No* p;
    if(ultimo != NULL)
    {
        if(primeiro == ultimo)
        {
            primeiro = NULL;
            p = NULL;
        }
        else
        {
            p = primeiro;
            while(p->getProx() != ultimo)
                p = p->getProx();
            p->setProx(NULL);
        }
        delete ultimo;
        ultimo = p;
        n--;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::imprime()
{
    No *p;
    p=primeiro;
    while(p!=NULL)
    {
        cout<<p->getInfo();
        cout<<", ";
    p=p->getProx();
    }
    cout<<endl;
}

int ListaEncad::numNos()
{
    No *p=primeiro;
    int nos=0;
    while(p!=NULL)
    {
        nos=nos+1;
        p=p->getProx();
    }
    return nos;
}

int ListaEncad::buscaMaior(int val)
{
    No *p=primeiro;
    int nos =0;
    while((p->getInfo())<val)
    {
        nos=nos+1;
        p=p->getProx();
    }
    return nos;
}
void ListaEncad::limpar()
{
    No *p=primeiro;
    while(p!=NULL)
    {
        p->setInfo(NULL);
        p=p->getProx();
    }
    cout<<"Lista limpa"<<endl;
}

float ListaEncad::calculaMedia()
{
    No *p=primeiro;
    int total=0;
    while(p!=NULL)
    {
        total=total+p->getInfo();
        p=p->getProx();
    }
    return total/numNos();
}

void ListaEncad::concatena(ListaEncad *l2)
{
    No *p=ultimo;
    No *q=primeiroq;
    while(q->getProx() != NULL)
    {
        p->setInfo(q->getInfo());
        p=p->getProx();
    }
}

