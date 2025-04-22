#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>

using namespace std;

class Complexo{
private:
    double re, im;
public:
    Complexo(double = 0.0, double = 0.0); // Implementação feita
    ~Complexo(){}; // Já implementada
    double get_real(){ // Já implementado
        return re;
    }
    double get_imag(){ // Já implementado
        return im;
    }

    // Lembrando que é uma recomendação já implementar os getters, pois são funções muito simples que apenas retornam um valor.
    
    // void print(consrt Complexo&); // implementado
    friend Complexo operator+(Complexo&, Complexo&);
    friend Complexo operator-(Complexo&, Complexo&);
    // É função de sobrecarga de operador? Sempre usar friend.
    friend ostream& operator<<(ostream&, const Complexo&); // implementado
    friend istream& operator>>(istream&, Complexo&); // implementado
};

#endif

Complexo::Complexo(double r, double i):re{r}, im{i}{
}

Complexo operator+(Complexo& c1, Complexo& c2){
    double real, imaginario;
    real = c1.re + c2.re;
    imaginario = c1.im + c2.im;
    return Complexo{real, imaginario}; 
}

// void Complexo::print(Complexo& a){
//     cout << a.re << " (" << a.im << ") i" << endl;
// }

Complexo operator-(Complexo& c1, Complexo& c2){
    double real, imaginario; 
    real = c1.re - c2.re;
    imaginario = c1.im - c2.im;
    return Complexo(real, imaginario);
}

ostream& operator<<(ostream& out, const Complexo& c){
    out << c.re << " (" << c.im << ") i" << endl;  
    return out;
}

istream& operator>>(istream& in, Complexo& c){
    in >> c.re >> c.im;
    return in; 
}

int main(){
    Complexo a;
    Complexo b; 

    cout << "Entre com o complexo a: ";
    cin >> a;
    cout << "Entre com o complexo b: ";
    cin >> b;

    a = a + b;
    b = b - a;

    cout << "Numeros criados: \n";
    cout << a << " e " << b;

    return 0;
}
// a + b // Mesma coisa de fazer operator+(a, b);  