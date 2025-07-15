#include <iostream>
#include <cctype>
#include <string>
#include <limits>
#include "Pila/Pila.hpp"

using namespace std;


int main()
{
    try{

        cout << "\n/******** PILA DE INT *********/\n";
        Pila<int> miPila;
        char respuesta;
        int valor;

        do{
            cout << "Valor a agregar: ";
            cin >> valor;
            while(cin.fail()){
                cout << "Error, no es del tipo adecuado" << endl;
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
                cout << "Valor a agregar: ";
                cin >> valor;
            }
            miPila.Agregar(valor);
            cout << "Elemento agregado. Ahora la pila tiene " << miPila.ObtenerTamano() << " elemento(s) y una capacidad de " << miPila.ObtenerCap() << "\n";
            miPila.Imprimir();
            cout << endl << endl;
            do{
                cout << "Quiere agregar otro elemento? (s/n): ";
                cin >> respuesta;
                respuesta = tolower(respuesta);
            }while(respuesta != 's' && respuesta != 'n');
        }while(respuesta == 's');


        do{
            cout << "Quiere vaciar la pila? (s/n): ";
            cin >> respuesta;
            respuesta = tolower(respuesta);
        }while(respuesta != 's' && respuesta != 'n');

        if(respuesta == 's') {
                miPila.Vaciar();
                cout << "Pila vaciada con exito.\n\n";
        }

        if(!miPila.EstaVacia()){
        cout << "Eliminando elementos" << endl;
        do{
            cout << "Elemento a eliminar: " << miPila.ObtenerTope() << endl;
            miPila.Eliminar();

            cout << "\nElemento eliminado. Ahora la pila tiene " << miPila.ObtenerTamano() << " elemento(s) y una capacidad de " << miPila.ObtenerCap() << "\n";
            miPila.Imprimir();
            cout << endl << endl;
            do{
                cout << "Quiere eliminar otro elemento? (s/n): ";
                cin >> respuesta;
                respuesta = tolower(respuesta);
            }while(respuesta != 's' && respuesta != 'n');
        }while(respuesta == 's');
        }

        do{
           cout << "Quiere hacer una copia de esta pila de int? ";
            cin >> respuesta;
            respuesta = tolower(respuesta);
        }while(respuesta != 's' && respuesta != 'n');

        if(respuesta == 's'){
            Pila<int> miPila2;
            cout << "Pila 1: \n";
            miPila.Imprimir();
            miPila2 = miPila;
            cout << "\nPila 2: \n";
            miPila2.Imprimir();
        }
    }catch(const char *msn){
        cerr << "Error: " << msn << endl;
    }


    return 0;

}
