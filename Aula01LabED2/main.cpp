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

bool func(int tam, int vet[], int *par,int *impar, int *negativos)
{
    for(int i=0;i<tam;i++)
    {
        if(vet[i]%2==0)
            *par=*par++;
        if(vet[i]%2!=0)
            *impar=*impar++;
        if(vet[i]<0)
            *negativos=*negativos++;
    }
    cout<<*negativos<<endl;
    cout<<*par<<endl;
    cout<<*impar<<endl;
    if(*negativos>0)
        return *negativos;
    else
        return 0;
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
    cout<<("Digite o valor do numerador:");
    cin>>num;
    cout<<("Digite o valor do divisor:");
    cin>>div;
    int r;
    int q;
    divisao(num,div,&q,&r);
    cout<<("O valor do quociente e:")<<q<<("e o resto e: ")<<r<<endl;

    //Exercicio 04

    int vet[5]={-1,2,3,4,5};
    int par=0 ;
    int impar=0 ;
    int negativos=0;
    x=func(5,vet,&par,&impar,&negativos);
    cout<<x;






    return 0;

}
