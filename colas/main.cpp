#include <iostream>

using namespace std;


struct Cola{
    int n;
    struct Cola *sgte;

};


void agregarNodo(struct Cola *&inicio, struct Cola *&fin, int n){
        struct Cola *aux = new Cola;

        aux->n = n;
        aux->sgte = nullptr;

        if(inicio == nullptr){
            inicio = aux;
        }
        else{
            fin->sgte = aux;
        }


        fin = aux;
}


void mostrar(struct Cola *&inicio, struct Cola *&fin){
    if(inicio==NULL){
            cout<<"La cola esta vacia."<<endl;
    }else{
    int n = inicio->n;
    struct Cola *aux = inicio;
    if(inicio == fin){
        cout<<"Sale numero: "<<n<<endl;
        inicio = NULL;
        fin = NULL;
    }

    else{
        cout<<"Sale numero: "<<n<<endl;
        inicio = inicio->sgte;
    }

    delete aux;


    }
}







int main()
{
    struct Cola *inicio = nullptr;
    struct Cola *fin = nullptr;

    for(int i = 1; i< 11; i++){
        agregarNodo(inicio, fin, i);
    }


    for(int i = 1; i< 11; i++){
    mostrar(inicio, fin);
   }

    mostrar(inicio, fin);

    mostrar(inicio, fin);

    agregarNodo(inicio, fin, 50);

    mostrar(inicio, fin);

    mostrar(inicio, fin);

    return 0;
}
