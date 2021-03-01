#include <iostream>
#include "tdaHeader.h"

using namespace std;

int main()
{
    estructura c;
    c=  crearTda();

    setId(c, 10);

    cout<< "TDA ID: " << getId(c);


    return 0;
}
