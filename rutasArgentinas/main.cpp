#include <iostream>
#include "resolver.h"

using namespace std;

/*EJERCICIO TIPO PARCIAL 2.

La DirecciónNacional de Vialidad dispone de un conjunto de archivos con los datos de las rutas de todo el país. Cada registro contiene:

- Código de ruta (char[5]) - Código de ciudad de origen (char[5]) -Código de ciudad de fin (char[5])  - Longitud (en km) - Tipo de ruta (1: Autopista, 2: Asfalto, 3: Ripio, 4: Mejorado, 5: Tierra) - Peaje (Si, No)

Además para el control de la circulación de vehículos genera diariamente un registro  en el archivo estado.dat, donde se indica la fecha (día, mes y año), el código de ruta, y  el estado (1: Transitable, 2: Intransitable). Hay un registro por día y código de ruta.

En otro archivo guarda la información de las ciudades. Cada registro tiene:

-Código de ciudad -Nombre de la ciudad - Código de Provincia a la que pertenece(1 a 24)

Tiene a su vez un archivo con las provincias: -Código de provincia -Nombre de la provincia -Región (‘S’, ‘N’, ‘E’, ‘O’)

Se pide confeccionar un programa C++ que determine e informe:
a)  La ruta más larga, indicando los nombres de la ciudad y la provincia de origen y de fin.
b)  Generar un archivo con el código de rutay la cantidad de días en que estuvo  intransitable esa ruta en el año 2015. No deben aparecer las rutas que  estuvieron transitables durante todo el año.
c)  La cantidad de rutas de cada tipo.



*/

int main()
{
    resolver res;

    res.puntoA();
    res.puntoB();
    res.puntoC();
    return 0;
}
