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
    int i;
    cout<<"Digite a idade do aluno: "<<endl;
    cin>>i;
    a.setIdade(i);

    cout<<"O nome do aluno e: "<<a.getNome()<<" ,sua idade e: "<<a.getIdade()<<" e sua matricula e: "<<a.getMatricula()<<endl;
    a.leFrequ();
    cout<<"O nome do aluno e: "<<a.getNome()<<" ,sua idade e: "<<a.getIdade()<<" e sua matricula e: "<<a.getMatricula()<<endl;

    // ------------------------------------------------------------------------
    // EXERCICIO 5
    // ------------------------------------------------------------------------

    // Implemente aqui


    // ------------------------------------------------------------------------
    // EXERCICIO 6
    // ------------------------------------------------------------------------

    // Implemente aqui

    // ------------------------------------------------------------------------
    // EXERCICIO 7
    // ------------------------------------------------------------------------

    //Prova p(3);


    return 0;
}
