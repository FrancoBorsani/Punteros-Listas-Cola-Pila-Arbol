#include <iostream>

using namespace std;


//C�DIGO ASCII
// 65: A - 66: B - 67: C - 68 - D - 69: E - 70: F
int func02(char a, int *&b, int &c, char &d, int e, void *f){
    *b = (int) a +1;
        e = 71;
        *(char*)f = (char)(e-1);
        d= (char)c++;
        int *aux;

        aux = (int*)f;
        f=b;
        b=aux;

        cout<<"var a: " << a <<"; var *b: "<<(int)(*b) << "; var c: " << c << "; var d: "<<d<<";var e: "<< e<<";var *f: "<< *(char *)f<<endl;
        return e;

}


int main()
{
int ret = 0;
char a= 'A';
int *b = new int;
*b = (int) a;
int c = 68;
char d = 'D';
int e = 69;
char *f = new char;
*f=(char) c;


ret = func02(a, b, c, d, e, f);
 cout<<"Segunda impresi�n:"<<endl;
 cout<<"var a: " << a <<"; var *b: "<<*b << "; var c: " << c << "; var d: "<<d<<";var e: "<<
 e<<";var *f: "<< *(char *)f<<endl;

cout<<"\nvar ret: "<<ret<<endl;

cout<<"\n-------------"<<endl;


 int *p, *q;

 q = & ret;

 p = & ret;

 if(p == q){                    // true, ambos contienen la misma posici�n en memoria
    cout<<"Son iguales";
 }else cout<<"Son distintos";


cout<<"\n\np: "<<&p<<" - q: "<<&q<<endl;  //La salida de los punteros no es la misma ya que ac� s� se est�
                                        //trabajando con la posici�n en memoria del puntero, no con
                                        //la que contiene. Si se le sacara el (&) s� ser�a la misma salida.

    return 0;
}
