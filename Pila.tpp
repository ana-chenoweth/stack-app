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