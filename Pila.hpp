#ifndef PILA_HPP
#define PILA_HPP

template <typename T = int>
class Pila
{
public:
    Pila();
    ~Pila();
    Pila(const Pila &p);
    Pila &operator=(const Pila &p);
    void Agregar(T valor);
    void Eliminar();
    T ObtenerTope() const;
    int ObtenerTamano() const;
    int ObtenerCap() const;
private:
    int tope;
    int cap;
    T *elemento;
};

#include "Pila.tpp"

#endif // PILA_HPP
