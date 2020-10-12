#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string n, string m);
        ~Aluno();

        // operacoes
        void setNome(string n);
        string getNome();

        // exercicio 1
        void leNotas();
        double calculaMedia();
        //exercicios 2
        void setIdade(int i);
        int getIdade();
        void setMatricula(string mat);
        string getMatricula();
        void ehPres();
        void alunoDetalhado();
        // implemente aqui

    private:
        int idade;
        string nome, matricula;
        double notas[7];
        bool freq[7];
        // exercicio 3
        // implemente aqui

        // exercicio 4
        // implemente aqui
};

#endif // ALUNO_H
