#include <iostream>
#include "tdaHeader.h"

using namespace std;

int main()
{
    struct Tda * estructura;

    estructura = crearTda();

    setId(estructura, 10);

    cout<< "TDA ID: " << getId(estructura);


    return 0;
}
