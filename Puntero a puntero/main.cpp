#include <iostream>

using namespace std;

int main()
{
    int *p = new int;
    int **pp;
    int a = 5;
    p = &a;
    pp = &p;

    (**pp)++;

    cout << "" << **pp<< endl;  //IMPRIME VALOR REAL DE LA POSICIÓN A LA QUE APUNTA pp
    cout << "" << *pp<< endl;   //IMPRIME LA POSICIÓN EN MEMORIA A LA QUE APUNTA pp
    cout << "" << p<< endl;     //POSICIÓN EN MEMORIA DE p


    int ***p3;

    p3 = &pp;                       // NO SERÍA VÁLIDO HACER p3 = &p ya que p3 es un puntero que apunta a un puntero que
                                    // apunta a un puntero.

    (***p3)++;                      //INCREMENTO EL VALOR DE LA VARIABLE FINAL (a)

    cout << "" << ***p3<< endl;    //IMPRIME VALOR REAL DE LA POSICIÓN A LA QUE APUNTA p3
    cout << "" << a<< endl;         //SALIDA: 7 --> YA QUE LOS PUNTEROS MODIFICAN DIRECTAMENTE SU VALOR (POR
                                    //TRABAJAR CON SU POSICIÓN EN MEMORIA)


    return 0;
}
