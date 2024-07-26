#include <bits/stdc++.h>
using namespace std;

class Vector{
    private:
        int *arr;
        int length;
        Vector(int len):length(len){
            // it is called member initializer list
            // values are assigned even before starting constructor
        };
    public:
        // Constructor
        Vector(int len, int default_value=0){
            this->length=len;
            this->arr=new int[len];
            for(int i=0;i<len;i++) this->arr[i]=default_value;
        }
        // Destructor
        ~Vector(){
            delete[] arr;
            cout<<"\nBye :)"<<endl;
        }
        // Functions
        int get(int pos){
            return this->arr[pos];
        }
        void print(){
            for(int i=0;i<length;i++) cout<<this->arr[i]<<" ";
            cout<<endl;
        }
};
void FnVector(){
    Vector v(10,200);
    v.print();
    cout<<v.get(5);
}

//===> Homework 2
class ClassA {
    public:
        ClassA() {
            cout << "ClassA Constructor\n";
        }
};
class ClassB {
    private:
        ClassA aa;	// originally this line needs to call constructor to default in begin
        int x;
    public:
        ClassB(int x) :
                aa(ClassA()), x(x) {
            // Originally the constructor of classA called twice
            // Once to be default Initialized
            // Once inside the constructor

            // Moving to Initializer list, then we Initialize it before construction only once

            // Tip: Always use Initializer list
            // Note: If a member object is not initialized through a member initializer, the member object’s default constructor will be called "implicitly".
                // Avoid duplicate initlaization!
        }
};
class ClassC {
    private:
        int &y;
        ClassB bb;

    public:
        ClassC(int &y, const ClassB &bb) :
            y(y), bb(bb) {
            // 1- The only way to initialize a reference is intializer list
            // 1- The only way to initialize a class that doesn't have default constructor (e.g. Class B)  is intializer list
        }
};
// Tip: please use initalizer list as much as possible!
void FnHW2() {
	int hello = 10;
	ClassB b(5);
	ClassC cc(hello, b);
}

//===> Homework 3
class A {
    private:
    public:
        A() {
            cout<<"A Constructor\n";
        }
        ~A() {
            cout<<"A Destructor\n";
        }
};
class B {
    private:
    public:
        B() {
            cout<<"B Constructor\n";
        }
        ~B() {
            cout<<"B Destructor\n";
        }
};
class C {
    private:
    public:
        C() {
            cout<<"C Constructor\n";
        }
        ~C() {
            cout<<"C Destructor\n";
        }
};
class D {
    private:
        A aa;
        B bb;
        C cc;

    public:
        D(const A &a, const B &b, const C &c) : aa(a), bb(b), cc(c){
            // By using & => we use same memory object hence faster and low memory
            // By using const => we remember developers you shouldn't try to change this parameter
        }
};

//===> Homework 4
class OurPrice {
    private:
        int price;
        OurPrice(int price){
            SetPrice(price);
        }
    public:
        int GetPrice() const {
            return price;
        }
        void SetPrice(int price) {
            if (price < 10)
                price = 0;
            this->price = price;
        }
        int SomeFun() {
            int price = 10;
            int price2 = 20;
            int price3 = 20;

            // For a clear and maintainable code, avoid local variable names with same name as data members.
            return price + price2 + price3;
        }
};
/* Review the code
   - The constructor should be public to use it
   - Notice that SetPrice involves some checks and changes for the input parameter. The constructor forget that
*/

//===> Homework 6
class Time {
    private:
        int total_seconds;

    public:
        Time(int hours, int minutes, int seconds) {
            // Delegation: give another object/function the task to do it for you
            SetTime(hours, minutes, seconds);
        }
        void SetTime(int hours, int minutes, int seconds) {
            total_seconds = 0;
            SetHours(hours);
            SetMinutes(minutes);
            SetSeconds(seconds);
        }
        int GetTotalSeconds() {
            return total_seconds;
        }
        int GetTotalMinutes() {
            return GetHours() * 60 + GetMinutes();
        }
        void PrintHHMMSS() {
            cout << ToSring(":") << "\n";
        }
        string ToSring(string seperator = "-") {
            ostringstream oss;
            oss << GetHours() << seperator << GetMinutes() << seperator << GetSeconds();
            return oss.str();
        }
        int GetHours() {
            return total_seconds / (60 * 60);
        }
        void SetHours(int hours) {
            if (hours < 0)
                hours = 0;
            total_seconds += (hours - GetHours()) * 60 * 60;
        }
        int GetMinutes() {
            return (total_seconds % (60 * 60)) / 60;
        }
        void SetMinutes(int minutes) {
            if (minutes < 0)
                minutes = 0;
            total_seconds += (minutes - GetMinutes()) * 60;
        }
        int GetSeconds() {
            return total_seconds % 60;
        }
        void SetSeconds(int seconds) {
            if (seconds < 0)
                seconds = 0;
            total_seconds += (seconds - GetSeconds());
        }
};
// In previous code, all functions use directly the 3 integers
// It might be a good practice to depend on the available setters and getters
// Imagine a real Time class with 20 functions that use minutes, which now doesn't exist
// If they all use GetMinutes, no one of them will be changed
// Be careful with data members that might change or keep depending on setters/getters
// As you see, we could even provide setters & getters for variables that doesn't exist
// Code "flexibility" is important
void timeClass() {
	Time t(0, 0, 0);
	t.SetMinutes(1);
	t.SetSeconds(60);
	t.SetHours(2);
	cout << t.GetTotalSeconds();
}


int main_cons(){
    //FnVector();
    //FnHW2();
    timeClass();

    return 0;
}
