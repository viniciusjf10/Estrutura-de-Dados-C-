#include "Aluno.h"

Aluno::Aluno(string n, string m)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas()
{
    for(int i=0;i<7;i++){
    cout<<"Digite a nota "<<i<<" do aluno."<<endl;
    cin>>notas[i];
}
}
double Aluno::calculaMedia()
{
    // Implemente sua solucao aqui
    return 0;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

// Implemente aqui a sua solucao


// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao

