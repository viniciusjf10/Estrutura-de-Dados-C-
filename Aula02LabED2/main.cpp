#include <iostream>

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
    if(a<=b){
    cout<<a;
    a=a+inc;
    imprimeIntervalo(a,b,inc);
}
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
}
