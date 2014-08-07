#include <iostream>

using namespace std;

class Nodo
{
public:
    Nodo*sig;
    int num;
    Nodo(int num)
    {
        this->num=num;
        sig=NULL;
    }
};

class Lista
{
public:
    Nodo*inicio;
    Lista()
    {
        inicio=NULL;
    }
    void agregar(Nodo*nuevo)
    {
        if(inicio==NULL)
        {
            inicio = nuevo;
        }else
        {
            Nodo*temp = inicio;
            while(temp->sig!=NULL)
            {
                temp = temp->sig;
            }
            temp->sig = nuevo;
        }
    }
    void imprimir()
    {
        for(Nodo*temp=inicio;temp!=NULL;temp=temp->sig)
        {
            cout<<temp->num<<endl;
        }
    }
    bool buscar(int num)
    {

    }
};

int main()
{
    Lista *l = new Lista();
    l->agregar(new Nodo(10));
    l->agregar(new Nodo(20));
    l->agregar(new Nodo(30));
    l->imprimir();
    return 0;
}
