#include <iostream>

using namespace std;


struct Cola{
    int n;
    struct Cola *sgte;
};


void agregarNodo(struct Cola *&inicio, int n){
        struct Cola *nuevo = new Cola;
        struct Cola *aux = new Cola;
        aux = inicio;
        nuevo->n = n;
        nuevo->sgte = nullptr;

        if(inicio == nullptr){
            inicio = nuevo;
            inicio->sgte = nuevo;
        }
        else{
                while(aux->sgte!=nullptr && aux->sgte!=inicio){
                    aux = aux->sgte;
                }
            aux->sgte = nuevo;
            nuevo->sgte = inicio;
        }
}


void mostrar(struct Cola *&lista){
        struct Cola * aux = new Cola;
        int primerElemento = lista->n;
        aux = lista;
        int i = 0;
        while(aux->sgte->n != primerElemento){
            cout<<""<<aux->n<<endl;
            aux = aux->sgte;

            i++;
        }
        cout<<""<<aux->n<<endl;
}



int main()
{
    struct Cola *lista = nullptr;

    for(int i = 1; i< 21; i++){
        agregarNodo(lista, i);
    }

    mostrar(lista);

    system("pause");
    system("cls");

    return 0;
}
