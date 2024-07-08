#include <bits/stdc++.h>
using namespace std;

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

int main() {
	return 0;
}
/* Review the code
   - The constructor should be public to use it
   - Notice that SetPrice involves some checks and changes for the input parameter. The constructor forget that
*/
