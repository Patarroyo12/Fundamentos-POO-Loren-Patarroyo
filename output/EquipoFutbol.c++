#include<iostream>
#include<string>
using namespace std;

class EquipoFutbol {
    private: 
    string nombre;

    protected:
    int puntosTemporada;

    public:
    void setNombre(string n){
        nombre = n;
    }
    string getNombre(){
        return nombre;
    }
    void setPuntos(int p){
    puntosTemporada = p;
    }
    int getPuntos(){
        return puntosTemporada;
    }

};    

// clase hija Jugador 

class Jugador : public EquipoFutbol {

    private:
    int golesAnotados;
    string posicion;
    public:
    void setDatosJugador(int goles , string pos){
        golesAnotados = goles;
        posicion = pos;
    }
    void mostrarInfo(){
        cout << "Jugador"<< endl;
        cout << " Equipo"<< endl;
        cout << "Puntos "<< endl;
        cout << "Posicion"<< endl;
    }
};

class Entrenador : public EquipoFutbol {
private:
    int añosExperiencia;
    string equipoDirigido;
    public:
    void setdatosEntrenador( int años , string equipo){
    añosExperiencia = años;
    equipoDirigido = equipo;
    }

    void mostrarInfo(){
        cout <<" Entrenador"<< endl;
        cout <<"Equipo"<< getNombre()<<endl;
        cout <<"Puntos"<< puntosTemporada<< endl;
        cout <<" añosExperiencia"<< añosExperiencia << endl;
        cout <<"Equipo Dirigido" << equipoDirigido << endl;
    }
};

// Crear los objetos

int main (){
    Jugador j;
    Entrenador e;

    //Asignar datos al jugador 
    j.setNombre("Real Madrid");
    j.setPuntos(60);
    j.setDatosJugador(25, "Barcelona");

    // Asignar datos al entrenador 
    e.setNombre("Barcelona");
    e.setPuntos(55);
    e.setdatosEntrenador(12, "Barcelona");

    //Mostrar informacion 
    j.mostrarInfo();
    e.mostrarInfo();
}