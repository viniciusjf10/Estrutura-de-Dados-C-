#include <iostream>
#include <stdlib.h>

using namespace std;

int fatorial(int n)
{
    if(n==0 || n==1)
        return n;
    else
        return n*fatorial(n-1);

}
void imprimeIntervalo(int a, int b, int inc)
{
    if(a<=b)
    {
    cout<<a;
    a=a+inc;
    imprimeIntervalo(a,b,inc);
    }
}

int imprimeDecrescente(int n)
{
    if(n==0)
    return 0;
    cout<<n;
    imprimeDecrescente(n-1);
}

float soma(int n, float vet[])
{
    float soma=0;
    for(int i=0;i<n;i++)
    {
        soma=soma+vet[i];
    }
    return soma;
}
int main()
{
    // Exercicio 1
    int n;
    cout << "Digite o valor que se deseja calcular o fatorial: "<<endl;
    cin>>n;
    int g=0;
    g=fatorial(n);
    cout<<"O valor do fatorial de "<<n<<" eh igual a: "<<g<<endl;

    //Exercicio 2

    int a,b,inc;
    cout<<"Digite o valor de a: "<<endl;
    cin>>a;
    cout<<"Digite o valor de b: "<<endl;
    cin>>b;
    cout<<"Digite o valor do incremento: "<<endl;
    cin>>inc;
    imprimeIntervalo(a,b,inc);

    //Exercicio3

    int x;
    cout<<"Digite o valor de n: "<<endl;
    cin>>x;
    imprimeDecrescente(x);

    //Exercicio4

    float *pt_v= new float [5];
    for(int i=0;i<5;i++)
    {
        cout<<"Digite o valor da posiçao "<<i<<" do vetor: "<<endl;
        cin>>pt_v[i];
    }
    cout<<"O valor da some e: "<<soma(5,pt_v)<<endl;

}
