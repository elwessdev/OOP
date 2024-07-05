#include <bits/stdc++.h>
using namespace std;

/*
    => Encapsulation: It refers to the bundling of data (attributes)
      and methods (functions or procedures) that operate on the data
      into a single unit, known as a class.

    => Encapsulation helps in:
    - Data Hiding: Protecting the internal state of the object from unintended or harmful modifications.
    - Modularity: Keeping different parts of the program isolated and manageable.
    - Maintainability: Making the code easier to maintain and update without affecting other parts of the program.

*/

class Rectangle {
    private:
        double length;
        double width;
    public:
        Rectangle(double l, double w){
            length=l;
            width=w;
        }
        int getArea() {
          return length * width;
        }
};

int main_enc(){
    Rectangle rec(5,6);
    cout<<rec.getArea()<<endl;
    //cout<<rec.length<<endl; // error: private data

    return 0;
}
