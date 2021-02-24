#ifndef CAMIONETA_H_INCLUDED
#define CAMIONETA_H_INCLUDED
#include <string>


typedef struct{
    int id;
    std::string modelo;
    float precio;
    std::string tipo;
}Camioneta;


std::string camionetaToString(void * vehiculo);


#endif // CAMIONETA_H_INCLUDED
