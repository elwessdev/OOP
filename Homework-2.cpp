#include <bits/stdc++.h>
using namespace std;

class Rectangle {
    private:
        double length;
        double width;
    public:
        Rectangle(){
            length=width=0;
        }
        Rectangle(double l, double w){
            length=l;
            width=w;
        }
        double getLength(){
            return length;
        }
        double getWidth(){
            return width;
        }
        double getArea(){
            return length*width;
        }
        bool isSquare(){
            return length==width;
        }

};

int main_h2(){
    Rectangle rec(5.6,4.3);
    cout<<rec.getLength()<<endl;
    cout<<rec.getWidth()<<endl;
    cout<<rec.getArea()<<endl;
    cout<<rec.isSquare()<<endl;

    return 0;
}
