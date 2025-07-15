#ifndef VECTOR_HPP_INCLUDED
#define VECTOR_HPP_INCLUDED

#include <iostream>
//Definicion de la clase

const int MAXDIM = 100; // Definimos un tamaño máximo para el vector


class Vector{
    friend std::ostream & operator<<(std::ostream &out,const Vector &v);
    friend std::istream & operator>>(std::istream &in,Vector &v);
public:
    //Vector(); ya no es ocupado;
    explicit Vector(int dim = 3); //para no hacer una conversion explicita de enteros a vectores
    Vector(const Vector &v);
    Vector & operator=(const Vector &v);
    ~Vector();
    int ObtenerDim() const;
    void Capturar();
private:
    int dim;
    //double componente[MAXDIM];
    double *componente = NULL;
    //metodo de utileria
    void EstablecerDim(int dim);
};

#endif // VECTOR_HPP_INCLUDED
