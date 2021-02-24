#include "auto.h"
#include <iostream>

std::string autoToString(void * vehiculo){
    std::cout<<"ID: "<<(*(Auto*)vehiculo).id<<std::endl<<std::endl;
    std::cout<<"Modelo: "<<(*(Auto*)vehiculo).modelo<<std::endl<<std::endl;
    std::cout<<"Precio: "<<(*(Auto*)vehiculo).precio<<std::endl<<std::endl;

    return "";



}
int getId(void * vehiculo){
    return (*(Auto*)vehiculo).id;
}
