#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux;
    aux= *a;
    *a=*b;
    *b=aux;
}

int main()
{
    //Exercicio 01
    int *pt;
    int x;
    cout<<("Digite o valor de x:");
    cin>>x;
    pt= &x;
    cout<<("O endereço de pt eh: ")<<&pt<<endl;
    cout<<("O conteudo da variavel pt eh: ")<< *pt<<endl;
    cout<<("O endereco de x eh: ")<<&x<<endl;
    *pt=*pt*10;
    cout<<("O conteudo apontado por pt eh: ")<< *pt<<endl;
    *pt=*pt+10;
    cout<<("O conteudo de pt eh: ")<<*pt<<endl;

    //Exercicio 02

    int a;
    int b;
    a=6;
    b=5;
    troca(a,b);
    cout<<"O valor de a eh: "<<*a<<" e o valor de b eh: "<<*b<<endl;











    return 0;

}
