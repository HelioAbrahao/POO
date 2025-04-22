#include <iostream>
#include "complexo.h"

using namespace std;

int main(){
    Complexo n1 {10,20};
    Complexo n2 {5, 15};

    cout << "n1 = ";
    n1.print();

    cout << "\nn2 = ";
    n2.print();
    cout << endl;

    Complexo n3, n4;

    if(!n3 && !n4){
        cout << "n3 e n4 inicialmente iguais a 0." << endl;
    }
    // n3 = n1.add(C); 
    // n4 = n1.sub(n2);
    n3 = n1 + n2; // n3 = n1.operator+(n2) -> é a mesma coisa
    n4 = n1 - n2;

    cout << "n3 (add) = ";
    n3.print();

    cout << "\nn4 (sub) =";
    n4.print();
    cout << endl;

    n1 = ++n2;
    cout << "Depois do incremento: " << endl;
    cout << "n1 = ";
    n1.print();
    cout << endl;

    cout << "n2 = ";
    n2.print();
    cout << endl;

    return 0;
}