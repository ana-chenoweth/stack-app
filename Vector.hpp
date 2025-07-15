#ifndef VECTOR_HPP_INCLUDED
#define VECTOR_HPP_INCLUDED

#include <iostream>
//Definicion de la clase

const int MAXDIM = 100; // Definimos un tamaño máximo para el vector


class Vector{

public:
    Vector();
    
private:
    int dim;
    double componente[MAXDIM];
    //metodo de utileria
    void EstablecerDim(int dim);
};

#endif // VECTOR_HPP_INCLUDED
