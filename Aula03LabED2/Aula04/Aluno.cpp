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
    int media=0;
    for (int i=0;i<7;i++)
    {
        media=media+notas[i];
    }
    return media/7;
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

void Aluno::setIdade(int i)
{
    idade=i;
}

int Aluno::getIdade()
{
    return idade;
}

void Aluno::setMatricula(string mat)
{
    matricula=mat;
}

string Aluno::getMatricula()
{
    return matricula;
}


// ----------------------------------------------------------------------------
void Aluno::ehPres()
{
    for(int i=0;i<7;i++){
    cout<<"Digite a presenca do aluno na aula "<<i<<endl;
    cin>>freq[i];
}
}
// ----------------------------------------------------------------------------

// Implemente aqui sua solucao

