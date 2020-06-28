#include <iostream>
#include "resolver.h"

using namespace std;

/*EJERCICIO TIPO PARCIAL 2.

La Direcci�nNacional de Vialidad dispone de un conjunto de archivos con los datos de las rutas de todo el pa�s. Cada registro contiene:

- C�digo de ruta (char[5]) - C�digo de ciudad de origen (char[5]) -C�digo de ciudad de fin (char[5])  - Longitud (en km) - Tipo de ruta (1: Autopista, 2: Asfalto, 3: Ripio, 4: Mejorado, 5: Tierra) - Peaje (Si, No)

Adem�s para el control de la circulaci�n de veh�culos genera diariamente un registro  en el archivo estado.dat, donde se indica la fecha (d�a, mes y a�o), el c�digo de ruta, y  el estado (1: Transitable, 2: Intransitable). Hay un registro por d�a y c�digo de ruta.

En otro archivo guarda la informaci�n de las ciudades. Cada registro tiene:

-C�digo de ciudad -Nombre de la ciudad - C�digo de Provincia a la que pertenece(1 a 24)

Tiene a su vez un archivo con las provincias: -C�digo de provincia -Nombre de la provincia -Regi�n (�S�, �N�, �E�, �O�)

Se pide confeccionar un programa C++ que determine e informe:
a)  La ruta m�s larga, indicando los nombres de la ciudad y la provincia de origen y de fin.
b)  Generar un archivo con el c�digo de rutay la cantidad de d�as en que estuvo  intransitable esa ruta en el a�o 2015. No deben aparecer las rutas que  estuvieron transitables durante todo el a�o.
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
