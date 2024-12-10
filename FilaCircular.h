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
        void enfileira(int val);
        int desenfileira();
        bool vazia();

    private:
        int max;
        int inicio;
        int fim;
        int n;
        int* vet;
        int inc(int ind);
};

#endif