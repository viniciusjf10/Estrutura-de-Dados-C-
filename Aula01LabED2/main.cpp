#include <iostream>

using namespace std;

void troca(int *a, int *b)
{
    int aux;
    aux= *a;
    *a=*b;
    *b=aux;
}

void divisao(int num, int div, int *q, int *r)
{
    int a=num;
    int b=div;
    *q=a/b;
    *r=a%b;
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
    troca(&a,&b);
    cout<<"O valor de a eh: "<<a<<" e o valor de b eh: "<<b<<endl;

    //Exercicio 03

    int num,div;
    cout<<("Digite o valor do numerador:")<<endl;
    cin>>num;
    cout<<("Digite o valor do divisor:")<<endl;
    cin>>div;
    int r;
    int q;
    divisao(num,div,&q,&r);
    cout<<("O valor do quociente e:")<<q<<("e o resto e: ")<<r<<endl;
    return 0;

}
