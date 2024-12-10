#include <iostream>
using namespace std;

#include "FilaCircular.h"

FilaCircular::FilaCircular(int max)
{
    max=max;
    inicio=0;
    fim=0;
    vet=new int [max];
}

FilaCircular::~FilaCircular()
{
    delete [] vet;
}

int FilaCircular::getInicio()
{
    if(this->vazia())
    {
        cout<< "Sem itens na fila";
        return;
    }
    return vet[inicio];
}

void FilaCircular::enfileira(int n)
{
    if(fim == max)
    {
        cout << "Erro maximo atingido.";
        return;
    }
    vet[fim++]=n;
}

int FilaCircular::desenfileira()
{
    if(this->vazia())
    {
        cout<< "Sem itens na fila";
        return;
    }
    return vet[inicio++];
}

bool FilaCircular::vazia()
{
    return (inicio==fim);
}

