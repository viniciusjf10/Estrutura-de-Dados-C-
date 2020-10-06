#include <iostream>

using namespace std;

int main()
{
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

    return 0;
}
