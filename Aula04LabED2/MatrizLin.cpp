#include <iostream>
#include <cstdlib>

#include "MatrizLin.h"

using namespace std;

MatrizLin::MatrizLin(int mm, int nn)
{
    cout << "Criando um objeto MatrizLin" << endl;
    nl = mm;
    nc = nn;
    vet = new float[nl*nc];
}

MatrizLin::~MatrizLin()
{
    cout << "Destruindo um objeto MatrizLin" << endl;
    delete [] vet;
}

int MatrizLin::detInd(int i, int j)
{
    if(i >= 0 && i < nl && j >= 0 && j < nc)
        return nc*i + j;
    else
        return -1;
}

float MatrizLin::get(int i, int j)
{
    int k = detInd(i, j);
    if(k != -1)
        return vet[k];
    else
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
}

void MatrizLin::set(int i, int j, float val)
{
    int k = detInd(i, j);
    if(k != -1)
        vet[k] = val;
    else
        cout << "ERRO: Indice invalido!" << endl;
}

void MatrizLin::imprime()
{
    for(int i=0;i<nl;i++){
        cout<<endl;
            for(int j=0;j<nc;j++){

                float val = get(i, j);
                cout << val << ",";
            }
    }
    cout<<endl;
}

bool MatrizLin::ehSimetrico()
{
    if(nl!=nc)
        return false;
    for(int i=0;i<nl;i++)
    {
        for(int j=0;j<nc;j++)
        {
            if( get(i,j) != get(j,i))
            {
                return false;
            }
        }
    }
    return true;
}

int MatrizLin::maiorValor()
{
    int maior = get(0,0);
    for(int i=0;i<nl;i++)
    {
        for(int j=0;j<nc;j++)
        {
            if(maior<= get(i,j))
            {
                maior = get(i,j);
            }
        }
    }
    return maior;
}

MatrizLin* MatrizLin::transposta()    {
{
    trans = new float[nl*nc];
    for(int i=0;i<nl;i++)
    {
        for(int j=0;j<nc;j++)
        {
            if(k != -1)
                trans[k] = val;
            float val = vet.get(i,j)) ;
            set(j, i, trans [i]);
            return 0;
        }
    }
}
