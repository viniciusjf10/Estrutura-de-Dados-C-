#include "Prova.h"

Prova::Prova(int nq)
{
    // implemente o construtor aqui
    cout << "Criando uma prova" << endl;
    notasQuestoes= new double [nq];
}

Prova::~Prova()
{
    cout << "Destruindo objeto prova" << endl;
}

void Prova::leNotas()
{
    for(int i=0;i<n;i++)
    {
        cout<<"Digite a nota da questao "<<i+1<<endl;
        cin>>notasQuestoes[i];
    }
}

void Prova::calculaNotaFinal()
{
    for(int i=0;i<n;i++)
    {
    notaFinal=notaFinal+notasQuestoes[i];
    }
}

double Prova::obtemNotaFinal()
{
    return notaFinal;
}

