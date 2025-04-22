#include <iostream>
#include "Circle.h"

using namespace std;

int main(){
    Circle c1; // {0.0, 0, 0}
    Circle c2(15.7, 8, -5);
    Circle c3(7.7);

    cout << "\nCircle c1: ";
    c1.imprime();
    c1.set_radius(10);
    c1.set_origin(5, 7);
    cout << "\nCircle c1 modificado: ";
    c1.imprime();
    cout << "\nArea: " << c1.area() << endl;
    cout << "Diametro: " << c1.diameter() << endl;


    cout << "\nCircle c2: ";
    c2.imprime();
    cout << "\nCircle c3: ";
    c3.imprime();

    return 0;
}