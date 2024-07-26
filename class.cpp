#include <bits/stdc++.h>
using namespace std;

class B;

class A {
    private:
        int a1_private = 10;
        int a2_private = 20;
        void HiddenA() {
            cout << "I am hidden\n";
        }
    public:
        // Friend Class: Access its private section
        friend class B;
        // Function AccessA only access my private data
        //friend void B::AcessA1(A& x);
};
class B {
    public:
        void AcessA1(A& x) const {
            cout << x.a1_private << "\n";
        }
        void AcessA2(A& x) const {
            cout << x.a2_private << "\n";
            x.HiddenA();
        }
};

int main() {
        A a;
        B b;
        b.AcessA1(a);
        //b.AcessA2(a);
        return 0;
}
