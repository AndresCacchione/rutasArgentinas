#include "Ruta.h"
#include "cstring"

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

RutaB::RutaB()
{
    contador=0;
}

char* RutaB::getCodigoRuta()
{
    return codigoRuta;
}

int RutaB::getContador()
{
    return contador;
}

void RutaB::setCodigoRuta(char* _codigoRuta)
{
    strcpy(this->codigoRuta,_codigoRuta);
}

void RutaB::aumentarContador()
{
    this->contador++;
}
