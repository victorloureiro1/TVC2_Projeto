#include <iostream>
#include <cstdlib>
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont (int tam)
{
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont ()
{
    delete [] vet;
}

void ListaCont::insereFinal (int val)
{
    if (n == max)
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit (1);
    }
    vet[n] = val;
    n = n + 1;
}

void ListaCont::imprime ()
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << vet[i];
        if (i + 1 < n)
        {
            cout << ", ";
        }
    }
    cout << "]";
}

void ListaCont::limpar()
{
    n = 0;
}

// ----------------------------------------------------------------------------
//Q1
bool ListaCont::insereValores(int k, int tam, int v[])
{
    int cont = 0;
    if(n + tam >= max || k < 0 || k > n+1)
    {
        cout << "Lista sem espaço!"<< endl;
        return false;
    }
    else if(k == n-1)
    {
            for(int i = k; i<(tam+n -1); i++)
                vet[i] = v[cont];
                cont = cont +1;
                n = n + 1;
                return true;
    }
    else
    {

        for(int i = (n+tam-1); i > k; i--)
        {
            vet[i] = vet[i-tam];
            n++;
        }

        for(int i=k; i <= (k+tam); i++ )
            {
               vet[i] = v[cont];
               cont = cont +1;
            }
        return true;
    }
}
//-Q1
// ----------------------------------------------------------------------------
