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
//****************************************************
template <typename T>
void Pila<T>::Agregar(T valor)
{
    if(EstaLlena()) Redimensionar();
    elemento[++tope] = valor;
}
//****************************************************
template <typename T>
void Pila<T>::Eliminar()
{
    if(EstaVacia()) throw "No se puede eliminar elemento; la pila est\xA0 vac\xA1 \ba";
    --tope;
}
//****************************************************
template <typename T>
T Pila<T>::ObtenerTope() const
{
    if(EstaVacia()) throw "La pila esta vacia";
    return elemento[tope];
}
//****************************************************
template <typename T>
void Pila<T>::Vaciar()
{
    tope = -1;
}
//****************************************************
template <typename T>
int Pila<T>::ObtenerTamano() const
{
    return tope + 1;
}
//****************************************************
template <typename T>
int Pila<T>::ObtenerCap() const
{
    return cap;
}
//****************************************************
template <typename T>
bool Pila<T>::EstaLlena() const
{
    return tope == cap - 1;
}
//****************************************************
template <typename T>
bool Pila<T>::EstaVacia() const
{
    return tope == -1;
}
//****************************************************
template <typename T>
void Pila<T>::Imprimir() const
{
    if(EstaVacia()) return;

    for(int i = 0; i <= tope; ++i)
    {
        std::cout << elemento[i] << ", ";
    }
    std::cout << "\b\b <- tope" << std::endl;
}
//****************************************************
template <typename T>
void Pila<T>::Redimensionar()
{
    T * aux = elemento;
    cap*=2;
    elemento = new T[cap];
    for(int i = 0; i<=tope; ++i)
        elemento[i] = aux[i];
    delete []aux;
}
