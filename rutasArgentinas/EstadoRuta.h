#ifndef ESTADORUTA_H
#define ESTADORUTA_H

enum estadoRuta
{
    Transitable=1,
    Intransit,
};

class Fecha
{
public:
    Fecha(){};
    int getAnio ();
private:
    int dia, mes, anio;
};

class EstadoRuta
{
    public:
        EstadoRuta();
        Fecha getFechaEstadoRuta();
        short int getEstadoRuta();
        char* getCodigoRuta();

    private:
        char codigoRuta[5];
        short int estadoRuta;
        Fecha fechaEstadoRuta;
};

class Intransitable
{
private:
    char codigoRuta [5];
    int cantidadDias;

public:
    Intransitable ();
    void setCodigoRuta(char *);
    void setCantidadDias(int);
};


#endif // ESTADORUTA_H
