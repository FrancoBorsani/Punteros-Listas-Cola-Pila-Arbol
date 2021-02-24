#ifndef AUTO_H_INCLUDED
#define AUTO_H_INCLUDED
#include <string>



typedef struct{
    int id;
    std::string modelo;
    float precio;
    std::string tipo;
}Auto;


std::string autoToString(void * vehiculo);

int getId(void * vehiculo);







#endif // AUTO_H_INCLUDED
