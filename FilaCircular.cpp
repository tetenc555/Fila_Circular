#include <iostream>
using namespace std;

#include "FilaCircular.h"

FilaCircular::FilaCircular(int max)
{
    max=max;
    inicio=0;
    n==0;
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

void FilaCircular::enfileira(int val)
{
    if(n==max)
    {
        cout << "Erro maximo atingido.";
        return;
    }
    vet[fim]=val;
    fim = inc(fim); //IMPORTANTE ! INCREMENTO CIRCULAR !!!!!
    n++;
}

int FilaCircular::desenfileira()
{
    if(this->vazia())
    {
        cout<< "Sem itens na fila";
        return;
    }
    int val=vet[inicio];
    n--;
    inicio=inc(inicio);
    return val;
}

bool FilaCircular::vazia()
{
    return (n==0);
}

int FilaCircular::inc(int ind)
{
    if (ind < 0 || ind>=max)
    {
        cout << "Valor invalido.";
        return NULL;
    }
    else
        return (ind+1) % max;
}