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
        int getTipoRuta();

    private:
        char codigoRuta[5];
        char ciudadOrigen[5];
        char ciudadFin[5];
        float km;
        int tipoRuta;
        bool peaje;
};

class RutaB
{
public:
    RutaB();
    char* getCodigoRuta();
    int getContador();
    void setCodigoRuta(char*);
    void aumentarContador();

private:
    char codigoRuta[5];
    int contador;
};


#endif // RUTA_H
