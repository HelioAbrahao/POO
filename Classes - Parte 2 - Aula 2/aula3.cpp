#include <iostream>
#include "date.h"

using namespace std;

int main(){
    Date aniversario {7, 11, 1985};

    aniversario.set_day(70);
    cout << "Teacher's birthday: ";
    aniversario.print();
    // cout << "Teacher's birthday(again): ";
    // aniversario.print();
    // cout << "Teacher's birthday(again): ";
    // aniversario.print();

    Date today {31, 8, 2020};
    today.set_day(1).set_day(9).set_year(2020);
    cout << "\nToday: ";
    today.print();
    
    cout << "\nHow many active instances? " << Date::how_many_instances() << endl;

    cout << "Birthday month: " << aniversario.get_mounth() << endl;
    cout << "Count: " << aniversario.get_count() << endl;

    return 0;
}