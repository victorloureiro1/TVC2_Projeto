#include <iostream>
#include <cstdlib>
#include "ListaDupla.h"

using namespace std;

ListaDupla::ListaDupla ()
{
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaDupla::~ListaDupla ()
{
    // OMITIDO
}

void ListaDupla::insereInicio (int val)
{
    NoDuplo *p = new NoDuplo ();
    p->setInfo (val);
    p->setProx (primeiro);
    p->setAnt (NULL);

    if (n == 0)
    {
        ultimo = p;
    }
    else
    {
        primeiro->setAnt (p);
    }
    primeiro = p;
    n = n + 1;
}

void ListaDupla::imprime ()
{
    cout << "[";
    for (NoDuplo *p = primeiro; p != NULL; p = p->getProx ())
    {
        cout << p->getInfo ();
        if (p->getProx () != NULL)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// ----------------------------------------------------------------------------
//Q2
void ListaDupla::trocaSegundoPenultimo()
{
    if(n >= 4)
    {
        NoDuplo *aux1 = new NoDuplo();
        NoDuplo *aux2 = new NoDuplo();
        NoDuplo *aux3 = new NoDuplo();
        aux1 = primeiro;
        aux1 = aux1->getProx();
        aux2 = primeiro;
        while(aux2->getProx() == ultimo->getAnt())
        {
            aux2 = aux2->getProx();
        }

        aux3 ->setInfo(aux2->getInfo());
        aux2 ->setInfo(aux1->getInfo());
        aux1 ->setInfo(aux3->getInfo());


    }else
    {
        cout<< "Lista com menos de 4 nós!"<< endl;
    }

}
//-Q2
// ----------------------------------------------------------------------------
