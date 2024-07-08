#include <bits/stdc++.h>
using namespace std;

class Vector{
    private:
        int *arr;
        int length;
    public:
        // Constructor
        Vector(int len):length(len){
            // it is called member initializer list
            // values are assigned even before starting constructor
        };
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

int main_cons()
{
    Vector v(10,200);
    v.print();
    cout<<v.get(5);

    return 0;
}
