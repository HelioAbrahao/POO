#ifndef COMPLEXO_H
#define COMPLEXO_H

#include <iostream>

using namespace std;

class Complexo {
        private:
            double re, im;
        public:
            Complexo(double = 0.0, double = 0.0);
            ~Complexo(){};
            double get_real(){return re;}
            double get_imag(){return im;}
            
            friend Complexo operator+(Complexo&, Complexo&);
            friend Complexo operator-(Complexo&, Complexo&);
        //  friend void print(const Complexo&); // Dando acesso à função print. Agora ela pode usar os atributos privados da classe. 
            friend ostream& operator<<(ostream&, const Complexo&);
            friend istream& operator>>(istream&, Complexo&);
            // Recomenda-se que sempre que eu passar um objeto para um função, eu o passe por referência. Caso você não queira que ele seja alterado lá dentro, utilizamos o const para garantir que esse objeto não seja alterado. 
    };

#endif

// Construtor
Complexo::Complexo(double r, double i) : re{r}, im{i} {}

// void Complexo::print() {
//         cout << re << " + (" << im << ") i";
// }

ostream& operator<<(ostream& out, const Complexo& c){ // Imagine que ela está no escopo global
        out << c.re << " + (" << c.im << ") i";
        return out;
}

istream& operator>>(istream& in, Complexo& c){
        in >> c.re >> c.im;
        return in; 
}

Complexo operator+(Complexo& c1, Complexo& c2){
        double r, i;
        r = c1.re + c2.re;
        i = c1.im + c2.im;
        return Complexo{r, i};
}
        
Complexo operator-(Complexo& c1, Complexo& c2){ // Complexo c1 e c2 nesse caso é passado por referência para evitar uma cópia desnecessária de mais um objeto. Observa-se que o objeto c não será alterado, por isso podemos fazer essa passagem por referência. 
        double r, i;
        r = c1.re - c2.re;
        i = c1.im - c2.im;
        return Complexo{r, i}; 
}

int main(){
        Complexo a;
        Complexo b;

        cout << "Entre com o complexo a: ";
        cin >> a;
        cout << "Entre com o complexo b: ";
        cin >> b;

        a = a + b; // notação direta e simples 
        // a = a.operator+(b); // notação explícita funcional
        b = b - a; // como em representação aritmética comum 
        

        cout << "Numeros criados: \n";
        cout << a << " e " << b;

        return 0;
}

