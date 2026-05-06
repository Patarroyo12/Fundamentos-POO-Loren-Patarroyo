#include<iostream>
#include<string>

class NameProduct{
    private:
    std::string name;
    int price;
    int amount;
    

    public:
   

    void setName(std::string n ){
         this->name= n;
    }
    std::string getName(){
        return name;
    }
    void setPrice(int p){
        this->price= p;
    }
    int getPrice(){
        return price;
    }
    void setAmount(int c){
        this->amount= c;
    }
    int getAmount(){
        return amount;
    }
};

class Discount : public NameProduct{
    private:
    float discount;

    public:
    float Price_Dis;
    void setDiscount(float d){
        this->discount =d;
    }
    float getDiscount(){
        return discount;
    }
    

};

int main(){
    NameProduct product;
    Discount product_d;
    int total;
    float desc;
    product.setName("Android");
    product.getName();
    product.setPrice(100000);
    product.getPrice();
    product.setAmount(2);
    product.getAmount();
 total= product.getPrice() *  product.getAmount();
    std::cout << "Nombre: " << product.getName() << std::endl;
    std::cout << "Precio: " << product.getPrice() << std::endl;
    std::cout << "Cantidad: " << product.getAmount() << std::endl;
    std::cout << "Total sin descuento: " << total << std::endl;

    product_d.setDiscount(0.40);
    product_d.getDiscount();

    desc= total* product_d.getDiscount();
    std::cout << "Precio con descuento: " << desc << std::endl;

    return 0;
}




