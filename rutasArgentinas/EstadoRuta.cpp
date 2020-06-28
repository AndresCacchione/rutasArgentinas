#include "EstadoRuta.h"
#include <cstring>

EstadoRuta::EstadoRuta()
{
}

char* EstadoRuta::getCodigoRuta()
{
    return codigoRuta;
}

int Fecha::getAnio()
{
    return anio;
}

Fecha EstadoRuta::getFechaEstadoRuta()
{
    return fechaEstadoRuta;
}

short int EstadoRuta::getEstadoRuta()
{
    return estadoRuta;
}

Intransitable::Intransitable()
{
    //ctor
}

void Intransitable::setCodigoRuta(char *codigo)
{
    strcpy(codigoRuta,codigo);

}

void Intransitable::setCantidadDias(int dias)
{
    cantidadDias=dias;
}
