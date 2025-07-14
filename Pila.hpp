#ifndef PILA_HPP
#define PILA_HPP

template <typename T = int>
class Pila
{
public:
    Pila();

private:
    int tope;
    int cap;
    T *elemento;
    bool EstaLlena() const;
    void Redimensionar();
};

#include "Pila.tpp"

#endif // PILA_HPP
