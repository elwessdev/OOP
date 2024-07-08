#include <bits/stdc++.h>
using namespace std;

class Invoice{
    private:
        string name;
        int number;
        double price;
        int quantity;
    public:
        // Getters
        const string& getName() const;
        int getNumber() const;
        double getPrice() const;
        int getQuantity() const;
        // Setters
        void setName(const string& n);
        void setNumber(int num);
        void setPrice(double prc);
        void setQuantity(int q);
        // Other Functions
        double getTotalPrice();
        void print();
        void ToString();

};
const string& Invoice::getName() const{
    return name;
}
int Invoice::getNumber() const{
    return number;
}
double Invoice::getPrice() const{
    return price;
}
int Invoice::getQuantity() const{
    return quantity;
}
void Invoice::setName(const string& n){
    this->name=n;
}
void Invoice::setNumber(int num){
    this->number=num;
}
void Invoice::setPrice(double prc){
    this->price=prc;
}
void Invoice::setQuantity(int q){
    this->quantity=q;
}
double Invoice::getTotalPrice(){
    return getPrice()*getQuantity();
}
void Invoice::print(){
    cout<<"Product name is "<<getName()<<"\n";
    cout<<"Product Number is "<<getNumber()<<"\n";
    cout<<"Product price is "<<getPrice()<<"\n";
    cout<<"Product quantity is "<<getQuantity()<<"\n";
}
void Invoice::ToString(){
    cout<<name<<","<<number<<","<<price<<","<<quantity<<"\n";
}
int main_invoice()
{
    Invoice p1;
    p1.setName("cars");
    p1.setNumber(259);
    p1.setPrice(32.6);
    p1.setQuantity(25);

    p1.print();
    cout<<"The totla price is: "<<p1.getTotalPrice()<<"\n";
    p1.ToString();
    return 0;
}
