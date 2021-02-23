#include <iostream>

using namespace std;



struct ListaNumeros{
    int n;
    ListaNumeros *sgte;
};

void mostrarLista(struct ListaNumeros *lista){

    for(ListaNumeros *p = lista; p!=nullptr; p=p->sgte){

        cout<<""<<p->n<<endl;

    }


}


ListaNumeros* agregarNodo (ListaNumeros* inicio, int n){
    ListaNumeros* nuevo = new ListaNumeros;
    nuevo->n = n;
    nuevo->sgte = nullptr;
    if(inicio == nullptr){
        nuevo->sgte = inicio;
        inicio = nuevo;
    }
    else{
        ListaNumeros* aux = inicio;
        //evaluo del segundo en adelante
        while(aux->sgte!=nullptr){
            aux = aux->sgte;
        }
        aux->sgte = nuevo;
    }
    return inicio;
}


void eliminarNodo(ListaNumeros *&lista, int n){
    ListaNumeros *aux = new ListaNumeros;
    bool eliminado = false;
    aux = lista;

    if(aux->sgte == nullptr && aux->n == n){
        aux = nullptr;
        eliminado = true;
    }



    if(aux->sgte != nullptr && aux->n == n){
        lista = aux->sgte;
        eliminado = true;
    }

    while(aux->sgte!=nullptr && !eliminado){
        if(aux->sgte->n== n){
                if(aux->sgte->sgte == nullptr){
                        aux->sgte = aux->sgte->sgte;
                }else{
                    aux->sgte = aux->sgte->sgte;
                }
            eliminado = true;
        }else{
        aux = aux->sgte;}
    }
}


int main()
{
    struct ListaNumeros *lista = nullptr;

    for(int i = 0 ; i < 11 ; i++){

       lista= agregarNodo(lista, i);

    }


    mostrarLista(lista);
    cout<<endl;

    eliminarNodo(lista, 0);

    mostrarLista(lista);

    return 0;
}
