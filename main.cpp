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

    bool insertar(Nodo*nuevo,int pos)
    {
        if(pos == 0)
        {
            nuevo->sig = inicio;
            inicio = nuevo;
        }else
        {
            Nodo* temp = inicio;
            for(int i =0;i<pos-1;i++)
            {
                temp = temp->sig;
                if(temp==NULL)
                {
                    cout<<"Posicion invalida"<<endl;
                    return false;
                }
            }
            nuevo->sig = temp->sig;
            temp->sig = nuevo;
        }

        return true;
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
    bool existe(int num)
    {
        Nodo*temp = inicio;
        while(temp != NULL)
        {
            if(num == temp->num)
                return true;
            temp = temp->sig;
        }
        return false;
    }
    void borrar(int pos)
    {
        if(pos==0)
        {
            Nodo*temp2 = inicio;
            inicio = inicio->sig;
            delete temp2;
        }else
        {
            Nodo* temp = inicio;
            for(int i=0;i<pos-1;i++)
            {
                temp = temp->sig;
            }
            Nodo* temp2 = temp->sig;
            temp->sig = temp->sig->sig;
            delete temp2;
        }
    }
    void borrarUltimo()
    {
        if(inicio==NULL)
        {
            cout<<"Lista vacia"<<endl;
        }
        else if(inicio->sig == NULL)
        {
            delete inicio;
            inicio = NULL;
        }else
        {
            Nodo*temp = inicio;
            for(;temp->sig->sig != NULL;
                    temp = temp->sig);
            delete temp->sig;
            temp->sig = NULL;
        }
    }
    void borrarTodo()
    {
    }
    void intercambiar(int pos1, int pos2)
    {
    }

    void invertir()
    {
    }

    void ordenar()
    {
    }

    void mezclar(Lista*l)
    {
    }

    void unificar()
    {
    }
};

int main()
{
    Lista l;
    l.agregar(new Nodo(10));
    l.agregar(new Nodo(20));
    l.agregar(new Nodo(30));
    l.agregar(new Nodo(50));
    l.borrar(0);
    while(true)
    {
        l.agregar(new Nodo(50));
//        l.borrar(2);
    }
    l.imprimir();
    return 0;
}
