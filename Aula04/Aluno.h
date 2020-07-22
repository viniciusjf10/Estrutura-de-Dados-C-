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
        void leFrequ();
        double calculaMedia();

        // exercicio 2
        void setIdade(int i);
        int getIdade();

        void setMatricula(string m);
        string getMatricula();
        // exercicio 5
        // implemente aqui



    private:
        int idade;
        string nome, matricula;
        double notas[7];
        double frequencia [7];

        // exercicio 3
        // implemente aqui


};

#endif // ALUNO_H
