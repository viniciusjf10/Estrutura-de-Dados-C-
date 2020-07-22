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
    for(int i=0; i<7; i++)
    {
    cout <<"Digite a nota "<<i+1<<endl;
    cin>> notas[i];
    }
}

void Aluno::leFrequ()
{
    for(int i=0; i<7; i++)
    {
    cout <<"Digite a frequencia do aluno na aula "<<i+1<<" (1 para presente e 0 para ausente)"<<endl;
    cin>> frequencia[i];
    }
}

double Aluno::calculaMedia()
{
    float soma=0;
    for(int i=0;i<7;i++)
    {
     soma= soma + notas[i];
    }
    return soma/7;
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

void Aluno::setIdade(int x)
{
    idade = x;
}

 void Aluno::setMatricula(string m)
{
    matricula=m;
}

string Aluno::getMatricula()
{
    return matricula;
}

int Aluno::getIdade()
{
    return idade;
}
// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao

