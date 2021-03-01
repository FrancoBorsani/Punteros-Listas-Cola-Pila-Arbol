#ifndef TDAHEADER_H_INCLUDED
#define TDAHEADER_H_INCLUDED



struct Tda;
typedef struct Tda * estructura;

estructura crearTda();

int getId(estructura tda);

void setId(estructura &tda, int n);


#endif // TDAHEADER_H_INCLUDED
