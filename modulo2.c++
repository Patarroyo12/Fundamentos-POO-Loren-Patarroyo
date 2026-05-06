#include<iostream>
using namespace std;

class Coche{
    string fabricante;
    int cilindraje;
    int potencia;
    string color;
    double precio;

    void encender(){
        cout <<"El coche esta enecendido" << endl;

    }
    void acelerar (){
        cout <<"El coche esta acelerando"<< endl;
    }
    void frenar (){
        cout <<"El coche esta frenando "<< endl;
    }
    void girar(){
        cout <<"El coche esta girando"<< endl;
    }

};

int main(){
    Coche c_Jose;
    Coche c_Maria;




    return 0;
}