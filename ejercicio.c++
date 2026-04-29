#include <iostream>




class Car{ 
    public:
        int speed;
            void acelerate(){
                
                speed = speed + 10;
                std::cout << "Velocidad es: " << speed;
            }
};

int main () {

    return 0;
}