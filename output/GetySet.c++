#include<iostream>

/**
 * @brief Cree una Clase persona con altura y edad
 * @param altura Altura Constante de tipo entero valor 180
 * @param edad Variable de tipo entero * 
 */


class Person {
private:
    int edad;              // Es modificable desde sus metodos Settery Getter
    const int altura = 180;  // Es constante por definicion y solo tiene un solo Getter

public:

    void setEdad(int edad){
        if(edad >= 0)
        {
            this-> edad= edad;
        } else {
            std::cout <<"Edad Invalida"<< std:: endl;
        }
    }
    
    int getEdad(){
        return this-> edad;
    }

    int getAltura(){
        return this-> altura;
    }
    }; 


    int main ()
    {
        Person marco;
        
        return 0;
    }   
       

