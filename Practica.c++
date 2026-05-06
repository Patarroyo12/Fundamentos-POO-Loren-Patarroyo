#include<iostream>
using namespace std;

class Carro{

public:
    int velocidad; 
    void acelerar(){
        velocidad = velocidad+10;
        cout<<"velocidad"<<velocidad;
    }
};   
