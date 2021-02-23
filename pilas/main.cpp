#include <iostream>

using namespace std;



struct ListaNumeros{
    int n;
    ListaNumeros *sgte;
};

void mostrarLista(struct ListaNumeros *lista){
    for(ListaNumeros *p = lista; p!=nullptr; p=p->sgte){
        cout<<"\n"<<p->n<<endl;
    }
}

//ELIMINAR NODO DE LA PILA.
void pop(struct ListaNumeros *&lista){
    ListaNumeros * aux = lista;
    ListaNumeros * aux2 = lista->sgte;
    cout<<endl<<"Numero eliminado: "<<aux->n;
    cout<<endl<<"------------------\n";
    free(aux);
    lista=aux2;
}

//AGREGAR NODO A LA PILA.
ListaNumeros* push (ListaNumeros* &inicio, int n){
    ListaNumeros* nuevo = new ListaNumeros;
    nuevo->n = n;
    nuevo->sgte = inicio;
    inicio = nuevo;
    return inicio;
}


int main()
{
    struct ListaNumeros *lista = nullptr;

    for(int i = 0 ; i <= 10 ; i++){

       lista= push(lista, i);

    }

    pop(lista);

    pop(lista);

    mostrarLista(lista);


    return 0;
}
