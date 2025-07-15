#include <math.h>
#include "Vector.hpp"
//***********************************
Vector::Vector(int dim /* = 3*/)
{
 EstablecerDim(dim);
 try
     {
        componente = new double[dim];
         for(int i = 0; i < dim; ++i){
             componente[i] = 0;
         }
     }catch(std::bad_alloc &){
         throw "No es posible construir un Vector";
     }
}
//***********************************
Vector::Vector(const Vector &v)
{
    *this=v;
    /*
    EstablecerDim(v.dim);
    try
    {
        for(int i = 0; i < dim; ++i){
            componente[i] = v.componente[i];
        }
    }catch(std::bad_alloc &){
         throw "No es posible construir un Vector";
    }
    */
}
//***********************************
void Vector::EstablecerDim(int dim)
{
    //this->dim//puntero a un objeto
    if (dim < 1)throw "Valor fuera de rango";
    this->dim = dim;
}