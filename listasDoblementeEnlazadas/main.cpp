#include <iostream>

using namespace std;


struct Cola{
    int n;
    struct Cola *ant;
    struct Cola *sgte;
};


void agregarNodo(struct Cola *&inicio, struct Cola *&fin, int n){
        struct Cola *aux = new Cola;
        struct Cola *buscarAnt = new Cola;

        buscarAnt = inicio;

        aux->n = n;
        aux->sgte = nullptr;

        if(inicio == nullptr){
            inicio = aux;
        }
        else{
            fin->sgte = aux;
        }
        aux->ant = fin;
        fin = aux;

}

void mostrar(struct Cola *&inicio, struct Cola *&fin){

    struct Cola *aux = new Cola;

    aux = inicio;

    struct Cola *auxBack = new Cola;

    if(inicio == fin){
        cout<<endl<<"No hay elementos en la cola"<<endl;

    }
    else{
            while(aux->sgte != nullptr){
                        cout<<"Actual para adelante: "<<aux->n<<endl;
                        aux = aux->sgte;
            }
            cout<<"Actual para adelante: "<<aux->n<<endl; //MUESTRA EL ÚLTIMO
            auxBack = aux;

            while(auxBack->ant != nullptr){
                        cout<<"Actual para atras: "<<auxBack->n<<endl;
                        auxBack = auxBack->ant;
            }
            cout<<"Actual para atras: "<<auxBack->n<<endl;  //MUESTRA EL PRIMERO

    }
}







int main()
{
    struct Cola *inicio = nullptr;
    struct Cola *fin = nullptr;

    for(int i = 1; i< 11; i++){
        agregarNodo(inicio, fin, i);
    }

    mostrar(inicio, fin);

    system("pause");
    system("cls");
    cout<<"------------------"<<endl;
    agregarNodo(inicio, fin, 333);
    mostrar(inicio, fin);


    return 0;
}
