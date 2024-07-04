#include <bits/stdc++.h>
using namespace std;

struct Date{
    int day;
    int month;
    int year;
    // Date functions
};
struct Time{
    int hours;
    int minutes;
    int seconds;
    // Time Functions
};
struct DateTime{
    Date date;
    Time time;
    // Constructor
    DateTime(Date date, Time time){
        cout<<date.day<<"-"<<date.month<<"-"<<date.year<<endl;
        cout<<time.hours<<"-"<<time.minutes<<"-"<<time.seconds<<endl;
    }
};

// Design separate Date & time structs
// DateTime is "composed" of Date and Time

int main_h1()
{
    Date d;
    d.day=10;
    d.month=5;
    d.year=2001;

    Time t;
    t.hours=5;
    t.minutes=25;
    t.seconds=58;

    DateTime DT(d,t);

    return 0;
}
