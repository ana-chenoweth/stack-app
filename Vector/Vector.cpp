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
Vector & Vector::operator=(const Vector &v)
{

    if(this == &v) return *this;
    //if(dim != v.dim){
    try{
        dim = v.dim;
        delete []componente;
        componente = new double[dim];

        //}
        for(int i = 0; i < dim; ++i){
                componente[i] = v.componente[i];
        }
    }catch(std::bad_alloc &){
         throw "No es posible construir un Vector";
    }
    return *this;
}
//***********************************
Vector::~Vector()
{
   //std::cout<<"destruyendo vector"<<std::endl;
   delete [] componente;
}
//***********************************
void Vector::EstablecerDim(int dim)
{
    //this->dim//puntero a un objeto
    if (dim < 1)throw "Valor fuera de rango";
    this->dim = dim;
}
//***********************************
int Vector::ObtenerDim() const
{
    return dim;
}
//***********************************
void Vector::Capturar()
{
    for(int i = 0; i < dim; ++i)
    {
     std::cin >>componente[i];
    }
}
//***********************************
void Vector::Imprimir() const
{
    std::cout << "[";
    for(int i = 0; i < dim; ++i)
    {
     std::cout<< componente[i]<< ", ";
    }
    std::cout<< "\b\b]";
}
//***********************************
Vector Vector::operator+(Vector v) const
{
    if(dim != v.dim)throw "Dimensiones incompatibles para sumar";
    Vector s(dim);
    for(int i=0; i<dim; ++i)
    {
        s.componente[i] = componente[i]+ v.componente[i];
    }
    return s;
}
//***********************************
std::ostream & operator<<(std::ostream &out,const Vector &v)
{
    out << "(";
    for(int i = 0; i < v.dim; ++i)
    {
        out << v.componente[i] << ", ";
    }
    out << "\b\b)";
    return out;
}
//***********************************
std::istream & operator>>(std::istream &in,Vector &v)
{

    for(int i = 0; i < v.dim; ++i)
    {
     in >> v.componente[i];
    }
    return in;
}
