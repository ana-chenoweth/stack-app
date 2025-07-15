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

     cout << "\n/******** PILAS DE DOUBLES ******/\n";

        Pila<double> pilaDoubles;
        char respuesta2;
        double valor2;

        do {
            cout << "Valor a agregar: ";
            cin >> valor2;
            while (cin.fail()) {
                cout << "Error, no es del tipo adecuado" << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Valor a agregar: ";
                cin >> valor2;
            }
            pilaDoubles.Agregar(valor2);
            cout << "Elemento agregado. Ahora la pila tiene " << pilaDoubles.ObtenerTamano() << " elemento(s) y una capacidad de " << miPila.ObtenerCap() << "\n";
            pilaDoubles.Imprimir();
            cout << endl << endl;
            do {
                cout << "Quiere agregar otro elemento? (s/n): ";
                cin >> respuesta2;
                respuesta2 = tolower(respuesta2);
            } while (respuesta2 != 's' && respuesta2 != 'n');
        } while (respuesta2 == 's');

        do{
            cout << "Quiere vaciar la pila? (s/n): ";
            cin >> respuesta2;
            respuesta2 = tolower(respuesta2);
        }while(respuesta2 != 's' && respuesta2 != 'n');

        if(respuesta2 == 's') {
                pilaDoubles.Vaciar();
                cout << "Pila vaciada con exito.\n\n";
        }

        if(!pilaDoubles.EstaVacia()){

                cout << "Eliminando elementos" << endl;
        do{
            cout << "Elemento a eliminar: " << pilaDoubles.ObtenerTope() << endl;
            pilaDoubles.Eliminar();

            cout << "\nElemento eliminado. Ahora la pila tiene " << pilaDoubles.ObtenerTamano() << " elemento(s)  y una capacidad de " << miPila.ObtenerCap() << "\n";
            pilaDoubles.Imprimir();
            cout << endl << endl;
            do{
                cout << "Quiere eliminar otro elemento? (s/n): ";
                cin >> respuesta2;
                respuesta2 = tolower(respuesta2);
            }while(respuesta2 != 's' && respuesta2 != 'n');
        }while(respuesta2 == 's');

        }

        do{
           cout << "Quiere hacer una copia de esta pila de doubles? ";
            cin >> respuesta2;
            respuesta2 = tolower(respuesta2);
        }while(respuesta2 != 's' && respuesta2 != 'n');

        if(respuesta2 == 's'){
            Pila<double> pilaDoubles2;
            cout << "Pila 1: \n";
            pilaDoubles.Imprimir();
            pilaDoubles2 = pilaDoubles;
            cout << "\nPila 2: \n";
            pilaDoubles2.Imprimir();
        }
    }catch(const char *msn){
        cerr << "Error: " << msn << endl;
    }


    return 0;

}
