#include <math.h>
#include "Vector.hpp"
//***********************************
Vector::Vector()
{
 EstablecerDim(dim);
 try
     {
         for(int i = 0; i < dim; ++i){
             componente[i] = 0;
         }
     }catch(std::bad_alloc &){
         throw "No es posible construir un Vector";
     }
}
