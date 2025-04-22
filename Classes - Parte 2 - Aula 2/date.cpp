#include <iostream>
#include "date.h"

using namespace std;

int Date::howmany = 0;

// Date::Date(int day, int month, int year){
//     d = day;
//     m = month;
//     y = year;
// }

Date::Date(int day, int month, int year)
    :d(day), m(month), y(year){
        cout << "Objeto inicializado!" << endl;
        count = 0;
        howmany++;
}

Date::~Date(){
    cout << "Objeto destruido!" << endl;
    howmany--;
} 

void Date::print() const{
    cout << "\nDay: " << d << endl;
    cout << "Month: " << m << endl;
    cout << "Year: " << y << endl; 
    count++;
}

Date& Date::set_day(int day){
    if(day > 0 && day <= 31){
       d = day;    
    }
    return *this;
}

Date& Date::set_month(int month){
    if(month > 0 && month <= 12){
        m = month;
    }
    return *this;
}

Date& Date::set_year(int year){
    if(year >= 0){
        y = year;
    }
    return *this;
}

