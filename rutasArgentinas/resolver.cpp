#include "resolver.h"


resolver::resolver()
{
    //ctor
}


void resolver::puntoA()
{
    Ruta rut;
    Ciudad ciu;
    Provincia prov;
    int pos=this->buscarPosicionRutaMax();
    if(leerRuta(pos,rut)==false) return;
    cout<<"La ruta mas larga es la "<< rut.getCodigoRuta()<<endl;

    int posOrigen = this->buscarCiudad(rut.getCiudadOrigen());
    int posDestino =this->buscarCiudad(rut.getCiudadDestino());
    if(leerCiudad(posOrigen,ciu)==false) return;
    cout<<"La ciudad origen es:"<<ciu.getCiudad();

    int codigoProvinciaOrigen= ciu.getCodigoProvincia();

    if(leerCiudad(posDestino,ciu)==false) return;
    cout<<"La ciudad destino es:"<<ciu.getCiudad();

    int codigoProvinciaDestino= ciu.getCodigoProvincia();


    int posProvOrigen = this->buscarPosicionProvincia(codigoProvinciaOrigen);
    if(posProvOrigen==-1) return;
    if(this->leerProvincia(posProvOrigen,prov)==false) return;
    cout<<"La provincia de origen es: "<< prov.getNombreProvincia() << endl;

    int posProvDestino = this->buscarPosicionProvincia(codigoProvinciaDestino);
    if(posProvDestino==-1) return;
    if(this->leerProvincia(posProvDestino,prov)==false) return;
    cout<<"La provincia de destino es: "<< prov.getNombreProvincia() << endl;
}


void resolver::puntoB()
{
    Ruta ruta;
    Intransitable intra;
    EstadoRuta estado;

    int posRuta=0;

    while (this->leerRuta(posRuta++,ruta))
    {
        int posEstado=0;
        int contDiasPorRuta=0;
        while (this->leerEstado(posEstado++,estado))
        {

            if (estado.getFechaEstadoRuta().getAnio()==2015 && estado.getEstadoRuta()==2)
            {
                contDiasPorRuta++;
            }
        }

        if (contDiasPorRuta>0)
        {
            intra.setCantidadDias(contDiasPorRuta);
            intra.setCodigoRuta(ruta.getCodigoRuta());
            if (guardarIntransitables(intra)==false)
            {
                cout<<"No se pudo guardar en el archivo Intransitables"<<endl;
                return;
            }
        }

    }
}

bool resolver::guardarIntransitables(Intransitable intra)
{
    FILE *p;
    p=fopen("Intransitable.dat","ab");
    if (p==NULL)
    {
        cout<<"El archivo no pudo ser abierto."<<endl;
        return false;
    }
    bool guardo= fwrite(&intra, sizeof (Intransitable),1,p);
    fclose(p);

return guardo;

}

void resolver::puntoC()
{


}

bool resolver::leerEstado(int pos, EstadoRuta& estado)
{
    FILE *p;
    p=fopen("Estado.dat","rb");
    if (p==NULL)
    {
        cout<<"El archivo de Estados no pudo ser leido."<<endl;
        return false;
    }
    fseek(p, pos* sizeof (EstadoRuta),0);
    bool leyo= fread(&estado, sizeof (EstadoRuta),1,p);
    fclose(p);

    return leyo;
}

int resolver::buscarPosicionProvincia(int codigoProvincia)
{
    Provincia prov;
    int pos=0;
    while(leerProvincia(pos++,prov))
    {
        if(prov.getCodigoProvincia()==codigoProvincia) return --pos;
    }

return -1;
}

bool resolver::leerCiudad(int pos, Ciudad &ciu)
{
    FILE *p;
    p=fopen("ciudad.dat", "rb");
    if(p==NULL)
    {
        cout<<"No se pudo leer el archivo Ciudad.dat"<<endl;
        return false;
    }

    fseek(p,sizeof (Ciudad)*pos, 0);
    bool leyo= fread(&ciu, sizeof(Ciudad),1,p);
    fclose(p);
    return leyo;
}

bool resolver::leerProvincia(int pos, Provincia &prov)
{
    FILE *p;
    p=fopen("provincia.dat", "rb");
    if(p==NULL)
    {
        cout<<"No se pudo leer el archivo Provincia.dat"<<endl;
        return false;
    }

    fseek(p,sizeof (Provincia)*pos, 0);
    bool leyo= fread(&prov, sizeof(Provincia),1,p);
    fclose(p);
    return leyo;
}

int resolver::buscarCiudad(char *ciudad)
{
    Ciudad ciu;
    int pos=0;
    while(leerCiudad(pos++,ciu))
    {
        if(strcmp(ciudad, ciu.getCiudad())==0)
        {
            return --pos;
        }
    }
return -1;
}


bool resolver::leerRuta(int pos,Ruta &rut)
{
    FILE *p;
    p=fopen("rutas.dat", "rb");
    if(p==NULL)
    {
        cout<<"Error al leer archivo rutas.dat"<<endl;
        return false;
    }

    fseek(p, sizeof(Ruta)* pos, 0);
    bool leyo= fread(&rut,sizeof(Ruta),1,p);
    fclose(p);
    return leyo;
}

int resolver::buscarPosicionRutaMax()
{
    Ruta aux;
    int pos=0;
    int posmax=0;
    float maximoKm=0;
    while(this->leerRuta(pos++,aux))
    {
        if(aux.getKM()>maximoKm)
        {
            maximoKm=aux.getKM();
            posmax=pos;
        }
    }
return posmax;
}
