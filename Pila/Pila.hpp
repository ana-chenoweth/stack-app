#ifndef PILA_HPP
#define PILA_HPP

/**
 * \file Pila.hpp
 * \brief Implementaci&oacute;n de una pila generica.
 * \author Ana Laura Chenoweth Galaz, Carlos Enrique Mancillas Duran
 * \date 21/02/2024
 * \brief Implementaci&oacute;n de una estructura de datos de pila gen&eacute;rica.
 *
 * \tparam T Tipo de elementos en la pila.
 */
/**
  *\code Ejemplo.cpp
    #include <iostream>
#include "Pila.hpp"

int main()
{
    Pila<int> pila;

    // Agregando elementos a la pila
    std::cout << "Agregando elementos a la pila..." << std::endl;
    pila.Agregar(10);
    pila.Agregar(20);
    pila.Agregar(30);

    // Imprimiendo la pila
    std::cout << "Elementos en la pila: ";
    pila.Imprimir();

    // Obteniendo el tama&ntilde;o y la capacidad de la pila
    std::cout << "Tama&ntildeo de la pila: " << pila.ObtenerTamano() << std::endl;
    std::cout << "Capacidad de la pila: " << pila.ObtenerCap() << std::endl;

    // Obteniendo y eliminando el elemento en el tope de la pila
    std::cout << "Elemento en el tope de la pila: " << pila.ObtenerTope() << std::endl;
    std::cout << "Eliminando elemento en el tope de la pila..." << std::endl;
    pila.Eliminar();

    // Imprimiendo la pila despu&eacute;s de eliminar el elemento en el tope
    std::cout << "Elementos en la pila despu&eacute;s de eliminar: ";
    pila.Imprimir();

    // Vaciar la pila
    std::cout << "Vaciar la pila..." << std::endl;
    pila.Vaciar();

    // Verificando si la pila est&aacute; vac&iacute;a
    if (pila.EstaVacia())
    {
        std::cout << "La pila est&aacute; vac&iacute;a." << std::endl;
    }
    else
    {
        std::cout << "La pila no est&aacute; vac&iacute;a." << std::endl;
    }

    return 0;
}

 * \endcode
 **/

template <typename T = int>
class Pila
{
public:
    /**
     * \brief Constructor por defecto.
     *
     * Inicializa una pila vac&iacute;a con una capacidad predeterminada.
     *
     * \exception const char * No es posible construir una pila.
     */
    Pila();
    /**
     * \brief Destructor.
     *
     * Libera la memoria asignada din&aacute;micamente para la pila.
     */
    ~Pila();
    /**
     * \brief Constructor de copias.
     *
     * Crea una nueva pila que es una copia exacta de otra pila.
     *
     * \param p La pila a ser copiada.
     *
     * \exception const char * No es posible construir una pila copia.
     */
    Pila(const Pila &p);
    /**
     * \brief Operador de asignaci&oacute;n.
     *
     * Asigna una pila a otra pila.
     *
     * \param p La pila a ser asignada.
     * \return La pila asignada.
     *
     * \exception const char * No es posible construir una pila.
     */
    Pila &operator=(const Pila &p);
    /**
     * \brief Agrega un elemento al tope de la pila.
     *
     * \param valor El valor a ser agregado.
     *
     * \exception const char * No es posible redimensionar la pila para agregar el elemento.
     */
    void Agregar(T valor);
    /**
     * \brief Elimina el elemento en el tope de la pila.
     *
     * \exception const char * No se puede eliminar elemento; la pila est&aacute; vac&iacute;a.
     */
    void Eliminar();
    /**
     * \brief Devuelve el elemento en el tope de la pila.
     *
     * \return El elemento en el tope de la pila.
     *
     * \exception const char * La pila est&aacute; vac&iacute;a.
     */
    T ObtenerTope() const;
    /**
     * \brief Vac&iacute;a la pila, eliminando todos los elementos.
     */
    void Vaciar();
    /**
     * \brief Devuelve el numero de elementos en la pila.
     *
     * \return El tama&ntildeo actual de la pila.
     */
    int ObtenerTamano() const;
    /**
     * \brief Devuelve la capacidad actual de la pila.
     *
     * \return La capacidad actual de la pila.
     */
    int ObtenerCap() const;
    /**
     * \brief Verifica si la pila est&aacute; vac&iacute;a.
     *
     * \return true si la pila est&aacute; vac&iacute;a, false en caso contrario.
     */
    bool EstaVacia() const;
    // M&eacute;todos auxiliares
    /**
     * \brief Imprime todos los elementos de la pila en la consola.
     */
    void Imprimir() const;
private:
    int tope;   ///< &iacute;ndice del elemento en el tope de la pila.
    int cap;    ///< Capacidad actual de la pila.
    T *elemento;///< Array que almacena los elementos de la pila.
    /**
     * \brief Verifica si la pila est&aacute; llena.
     *
     * \return true si la pila est&aacute; llena, false en caso contrario.
     */
    bool EstaLlena() const;
    /**
     * \brief Redimensiona la capacidad de la pila duplic&aacute;ndola cuando est&aacute; llena.
     */
    void Redimensionar();
};

#include "Pila.tpp"

#endif // PILA_HPP
