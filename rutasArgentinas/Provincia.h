#ifndef PROVINCIA_H
#define PROVINCIA_H

enum region
{
    sur='S',
    norte='N',
    este='E',
    oeste='O',
};

class Provincia
{
    public:
        Provincia();
        short int getCodigoProvincia();
        char* getNombreProvincia();

    private:
        short int codigoProvincia;
        char nombreProvincia[30];
        char region;
};

#endif // PROVINCIA_H
