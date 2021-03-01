#include "tdaHeader.h"

using namespace std;


struct Tda{

    int id;
    Tda *sgteNodo;

};


int getId(estructura tda){
    return tda->id;
}

void setId(estructura &tda, int n){
    tda->id = n;
}

estructura crearTda(){
    estructura a = new Tda;
    return a;
}
