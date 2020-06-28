#ifndef RESOLVER_H
#define RESOLVER_H
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include "Ruta.h"
#include "EstadoRuta.h"
#include "Intransitable.h"
#include "Ciudad.h"
#include "Provincia.h"
using namespace std;

class resolver
{
    public:
        resolver();
        void puntoA();
        void puntoB();
        void puntoC();
        bool leerRuta(int pos,Ruta&);
        int buscarPosicionRutaMax();
        bool leerCiudad(int, Ciudad &);
        bool leerProvincia(int , Provincia &);
        int buscarCiudad(char*);
        int buscarPosicionProvincia(int);
        bool leerEstado (int pos, EstadoRuta&);
        bool guardarIntransitables (Intransitable);
        void mostrarContadorTipoRutas(int *, int, char(*)[30]);
        int tamanioArchivo(char*, int);
        bool copiarRutas(RutaB*);
};

#endif // RESOLVER_H
