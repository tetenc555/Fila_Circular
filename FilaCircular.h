#ifndef FILACIRCULAR_H__
#define FILACIRCULAR_H__
#include <iostream>

using namespace std;

class FilaCircular
{
    public:
        FilaCircular(int max);
        ~FilaCircular();
        int getInicio();
        void enfileira(int n);
        int desenfileira();
        bool vazia();

    private:
        int max;
        int inicio;
        int fim;
        int* vet;
};

#endif