#include <iostream>
#include "MatrizLin.h"

using namespace std;

int main()
{
    int m = 8, n = 8;
    MatrizLin mat(m, n);

    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
        {
            //float val = j + n*i; /// sequencia numerica no intervalo 0..(m*n-1)
            mat.set(i, j, 8);
        }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            float val = mat.get(i, j);
            cout << val << "\t";
        }
        cout << endl;
    }
    mat.imprime();
    cout<<"A matriz eh simetrica. A informaçao eh verdadeira ou falsa? "<<mat.ehSimetrico()<<endl;
    return 0;
}
