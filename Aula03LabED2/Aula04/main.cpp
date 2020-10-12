#include <iostream>
#include "Aluno.h"
#include "Prova.h"

using namespace std;

int main()
{
    cout << "LABORATORIO DE PROGRAMACAO II - AULA 04\n" << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 1
    // ------------------------------------------------------------------------
    Aluno a("Carlos", "201566123AB");

    // leitura das notas do aluno
    a.leNotas();
    double m = a.calculaMedia();

    cout << "Media do aluno: " << m << endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 3
    // ------------------------------------------------------------------------

    cout<<"Digite a idade do aluno: "<<endl;
    int i;
    cin>>i;
    a.setIdade(i);

    cout<<"Digite a matricula do aluno: "<<endl;
    string mat;
    cin>>mat;
    a.setMatricula(mat);

    cout<<"Todos os dados do aluno são: "<<endl;
    cout<<"Nome: "<<a.getNome()<<endl;
    cout<<"Idade: "<<a.getIdade()<<endl;
    cout<<"Matricula: "<<a.getMatricula()<<endl;
    a.ehPres();
    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    a.alunoDetalhado();

    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    Prova p(3);
    p.leNotas();
    p.calculaNotaFinal();
    cout<<"A nota final da prova eh: "<<p.obtemNotaFinal()<<endl;


    return 0;
}
