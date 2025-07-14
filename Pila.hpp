#ifndef PILA_HPP
#define PILA_HPP

template <typename T = int>
class Pila
{
public:
    Pila();
    ~Pila();

private:
    int tope;
    int cap;
    T *elemento;
};

#include "Pila.tpp"

#endif // PILA_HPP
