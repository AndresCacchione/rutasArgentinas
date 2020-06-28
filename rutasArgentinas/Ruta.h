#ifndef RUTA_H
#define RUTA_H

enum tipoRuta
{
    Autopista=1,
    Asfalto,
    Ripio,
    Mejorado,
    Tierra
};


class Ruta
{


    public:
        Ruta();
        float getKM();
        char* getCodigoRuta();
        char* getCiudadOrigen();
        char* getCiudadDestino();

    private:
        char codigoRuta[5];
        char ciudadOrigen[5];
        char ciudadFin[5];
        float km;
        int tipoRuta;
        bool peaje;
};

#endif // RUTA_H
