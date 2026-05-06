#include<iostream>
using namespace std;

class Person {
private:
    int edad;
public:
    void setEdad(int e){
        if(e >= 0){
            edad = e;
        } else {
            cout <<"Edad invalida"<< endl;
        }
    }    
    int getEdad(){
        return edad;
    }

};

int  main(){
    Person p;
    p.setEdad(25);
    cout << p.getEdad()<< endl;
    p.setEdad(-5);
}