#include "camioneta.h"
#include <iostream>


std::string camionetaToString(void *vehiculo){
    std::cout<<"ID: "<<(*(Camioneta*)vehiculo).id<<std::endl<<std::endl;
    std::cout<<"Modelo: "<<(*(Camioneta*)vehiculo).modelo<<std::endl<<std::endl;
    std::cout<<"Precio: "<<(*(Camioneta*)vehiculo).precio<<std::endl<<std::endl;

    return "";
}
