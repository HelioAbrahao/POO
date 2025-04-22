#ifndef ANGULO_H
#define ANGULO_H

#include <iostream>
#include <cmath>

using namespace std;

class Angulo{
private: 
    double grau;
public: 
    Angulo(double g = 0.0);
    ~Angulo(){};

    double radiano() const;
    double seno() const;
    double cosseno() const;
    double tangente() const;  
    double complementar() const;

    friend ostream& operator<<(ostream&, const Angulo&); 
    friend istream& operator>>(istream&, Angulo&);
    friend Angulo operator+(const Angulo&, const Angulo&);
    friend Angulo operator-(const Angulo&, const Angulo&);
};

#endif

Angulo::Angulo(double angulo):
    grau{angulo}{}

double Angulo::radiano() const{
    double radiano = grau * (M_PI / 180.0);
    return radiano;
}

double Angulo::seno() const{
    double radiano = grau * (M_PI / 180.0);
    return sin(radiano); 
}

double Angulo::cosseno() const{
    double radiano = grau * (M_PI / 180.0);
    return cos(radiano); 
}

double Angulo::tangente() const{
    double radiano = grau * (M_PI / 180.0);
    return tan(radiano); 
}

double Angulo::complementar() const{
    if(grau >= 90.0){
        cout << "Nao existe complementar para angulos iguais ou maiores que 90 graus. " << endl;
        return -1;
    }
    return 90 - grau;
}

ostream& operator<<(ostream& out, const Angulo& a){
    out << "Grau: " << a.grau << endl
        << "Radiano: " << a.radiano() << endl
        << "Seno: " << a.seno() << endl
        << "Cosseno: " << a.cosseno() << endl
        << "Tangente: " << a.tangente() << endl
        << "Complementar: " << a.complementar() << endl;
    return out;
}  


istream& operator>>(istream& in, Angulo& a){
    in >> a.grau;
    return in;
} 

Angulo operator+(const Angulo& a1, const Angulo& a2){
    double soma_angulos;
    soma_angulos = a1.grau + a2.grau;
    return Angulo(soma_angulos);
}

Angulo operator-(const Angulo& a1, const Angulo& a2){
    double subtracao_angulos;
    subtracao_angulos = a1.grau - a2.grau;
    return Angulo(subtracao_angulos);
}

int main(){
    Angulo a; 
    Angulo b;

    cout << "Entre com o angulo a: ";
    cin >> a;
    cout << "Entre com o angulo b: ";
    cin >> b;

    Angulo soma = a + b; 
    Angulo diferenca = b - a; 

    cout << "\nResultado da soma: " << soma << endl;
    cout << "Resultado da subtração: " << diferenca << endl; 

    return 0;
}