#include <iostream>
#include "auto.h"
#include "camioneta.h"

using namespace std;



struct ListaNumeros{
    void *vehiculo;
    ListaNumeros *sgte;
};

void mostrarLista(struct ListaNumeros *lista){
    for(ListaNumeros *p = lista; p!=nullptr; p=p->sgte){
            if((*(Auto*)p->vehiculo).tipo == "Auto"){
               cout<< autoToString((Auto*)p->vehiculo) <<endl;
            }else{
                cout<< camionetaToString((Camioneta*)p->vehiculo) <<endl;

            }
    }
    }



ListaNumeros* agregarNodo (ListaNumeros* &inicio, void* vehiculo){
    ListaNumeros *lista = new ListaNumeros;
    lista->vehiculo = vehiculo;
    lista->sgte = nullptr;

  //  if(inicio == nullptr){
  if(inicio == nullptr){
        inicio = lista;
    }
    else{
        ListaNumeros* aux = inicio;
        //evaluo del segundo en adelante
        while(aux->sgte!=nullptr){
            aux = aux->sgte;
        }
        aux->sgte = lista;
    }
    return inicio;
}



int main()
{
    struct ListaNumeros *lista = nullptr;

    void * nuevo;

    Camioneta c;
    c.id =1;
    c.modelo= "Ford";
    c.precio = 1500000;
    c.tipo = "Camioneta";
    nuevo = &c;

    lista= agregarNodo(lista, nuevo);

    Auto a;
    a.id =2;
    a.modelo= "Ferrari";
    a.precio = 150000000;
    a.tipo = "Auto";
    nuevo = &a;

    lista= agregarNodo(lista, nuevo);
   // cout<<""<<(*(Camioneta*)nuevo).id;        FUNCIONANDO

    mostrarLista(lista);

    return 0;
}
