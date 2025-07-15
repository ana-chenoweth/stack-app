#include <iostream>
template <typename T>
Pila<T>::Pila()
{
    tope = -1;
    cap = 15;
     try
     {
         elemento = new T[cap];
     }catch(std::bad_alloc &){
         throw "No es posible construir un Pila";
     }
}
//*******************************************************
//Destructor
template <typename T>
Pila<T>::~Pila()
{
   delete []elemento;
}
//***********************************
// Constructor de copias
template <typename T>
Pila<T>::Pila(const Pila &p) : elemento(NULL) {
    *this=p;
}
//Operador igual
//****************************************************
template <typename T>
Pila<T> & Pila<T>::operator=(const Pila &p)
{
    if(this == &p) return *this;
    try{
        cap = p.cap;
        tope = p.tope;
        delete []elemento;
        elemento = new T[cap];
        for(int i = 0; i <= tope; ++i){
                elemento[i] = p.elemento[i];
        }
    }catch(std::bad_alloc &){
         throw "No es posible construir un Vector";
    }
    return *this;
}