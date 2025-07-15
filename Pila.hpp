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
    void Vaciar();
    int ObtenerTamano() const;
    int ObtenerCap() const;
    bool EstaVacia() const;
private:
    int tope;
    int cap;
    T *elemento;
    bool EstaLlena() const;
    void Redimensionar();
};

#include "Pila.tpp"

#endif // PILA_HPP
