#include<iostream>
#include<string>

class NameProduct{
    private:
    std::string name;
    int price;
    int amount;
    

    public:
    int total(int p * int c){
        return p*c;
    }

    void setNameProduct(std::string n ){
         this->name= n;
    }
    std::string getNameProduct(){
        return NameProduct;
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
    int discount;

    public:
    void setDiscount(int d){
        this->discount =d;
    }
    int getDiscount(){
        return discount;
    }
    int discountedprice(int )

};




