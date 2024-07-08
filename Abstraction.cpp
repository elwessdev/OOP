#include <bits/stdc++.h>
using namespace std;
/*
    => Abstraction is the process in which we only show essential details/
    functionality to the user. The non-essential implementation details are not displayed
    to the user. 

    => Advantages of Abstraction
    - Helps the user to avoid writing the low-level code
    - Avoids code duplication and increases reusability.
    - Can change the internal implementation of the class independently without affecting the user.
    - Helps to increase the security of an application or program as only important details are provided to the user.
    - It reduces the complexity as well as the redundancy of the code, therefore increasing the readability.
*/


// Homework 1 - Building
class Room{
    private:
        int width;
        int height;
        string color;
    public:
        // Getters
        const string& getColor(){
            return color;
        }
        const int& getHeight(){
            return height;
        }
        const int& getWidth(){
            return width;
        }
        // Setters
        void setColor(const string& c){
            this->color=c;
        }
        void setHeight(const int& h){
            this->height=h;
        }
        void setWidth(const int& w){
            this->width=w;
        }
};

class Apartment{
    private:
        vector<Room> rooms;
        vector<Room> bathroom;
        int apartment_number;
    public:
        const int& getApartmentNumber(){
            return apartment_number;
        }
        const vector<Room>& getRooms(){
            return rooms;
        }
        const vector<Room>& getBathroom(){
            return bathroom;
        }

        void setApartmentNumber(const int& num){
            this->apartment_number=num;
        }
        void setRooms(const vector<Room>& room){
            this->rooms=room;
        }
        void setBathroom(const vector<Room>& bath){
            this->bathroom=bath;
        }
};

class Elevator{
    private:
        int width;
        int height;
        int max_people;
        int max_weight;
    public:
        const int& getWidth(){
            return width;
        }
        const int& getHeight(){
            return width;
        }
        const int& getMaxPeople(){
            return max_people;
        }
        const int& getMaxWeight(){
            return max_weight;
        }
        void setWidth(const int& w){
            this->width=w;
        }
        void setHeight(const int& h){
            this->height=h;
        }
        void setMaxPeople(const int& mp){
            this->max_people=mp;
        }
        void setMaxWeight(const int& mw){
            this->max_weight=mw;
        }
};

class Building{
    private:
        vector<Apartment> apartments;
        vector<Elevator> elevators;
};

int main_abs()
{
    //
    return 0;
}
