#include "Ruta.h"

Ruta::Ruta()
{

}

int Ruta::getTipoRuta()
{
    return tipoRuta;
}

float Ruta::getKM()
{
    return km;
}

char* Ruta::getCodigoRuta()
{
    return codigoRuta;
}

char* Ruta::getCiudadOrigen()
{
    return ciudadOrigen;
}

char* Ruta::getCiudadDestino()
{
    return ciudadFin;
}
