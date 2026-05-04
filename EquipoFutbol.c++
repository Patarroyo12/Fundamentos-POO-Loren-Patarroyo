#include <iostream>

using std::string;

class EquipoFutbol{
    private:
       string nombreequipo;

    protected:
       int puntosTemporada;
       
    void  setNombreequipo ( string nombreequipo ){
        this-> nombreequipo = nombreequipo;
        
    }
    string getnombreequipo (){
        return this->nombreequipo; 
    }      
    

};

class Jugador : public EquipoFutbol {
    private:
        int golesAnotados;
        int posicion;

    public:
        void setGolesAnotados(string GolesAnotados){
            this-> golesAnotados = golesAnotados;
        }

        int getGolesAnotados (){
            return this-> golesAnotados; 
        }      

};
