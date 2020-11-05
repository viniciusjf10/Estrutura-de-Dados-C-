#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);

    l.insereFinal(24);
    l.insereFinal(3);
    l.insereFinal(2);
    l.insereFinal(-1);
    l.insereFinal(99);
    l.imprime();
    int vet2[10]={1,2,3,4,5,6,7,8,9,10};
    l.insereValores(10,vet2);

    return 0;
}
