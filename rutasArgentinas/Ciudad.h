#ifndef CIUDAD_H
#define CIUDAD_H


class Ciudad
{
    public:
        Ciudad();
        char* getCiudad();
        short int getCodigoProvincia();

    private:
        char codigoCiudad[5];
        char nombreCiudad[30];
        short int codigoProvincia;
};

#endif // CIUDAD_H
