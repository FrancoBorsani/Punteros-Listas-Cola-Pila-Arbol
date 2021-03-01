#include "tdaHeader.h"

using namespace std;


struct Tda{

    int id;
    Tda *sgteNodo;

};


int getId(struct Tda * tda){
    return tda->id;
}

void setId(struct Tda *tda, int n){
    tda->id = n;
}

struct Tda* crearTda(){
    struct Tda *estructura = new Tda;
    return estructura;
}
