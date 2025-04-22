#include <iostream>
#include "complexo.h"
        
using namespace std;

Complexo::Complexo(float r, float i){
        re = r; im = i;
}

        // interface
void Complexo::print(){
        cout << re << "+(" << im << ")i";
}

Complexo Complexo::add(Complexo& par){
        float x = this->re + par.re;
        float y = this->im + par.im;
        return Complexo {x, y};
} 
// this->re // parte real de quem está chamando 
// par.re // parte real de quem foi passado como parâmetro
Complexo Complexo::sub(Complexo&par){
        float x = this->re - par.re;
        float y = this->im - par.im;
        return Complexo {x, y};
}

Complexo Complexo::operator+(Complexo& par){
        float x = this->re + par.re;
        float y = this->
        im + par.im;
        return Complexo {x, y};
}
        
Complexo Complexo::operator-(Complexo& par){
        float x = this->re - par.re;
        float y = this->im - par.im;
        return Complexo {x, y};
}

bool Complexo::operator!(){
        if(re == 0 && im == 0){
                return true;
        } else {
                return false;
        }
}

Complexo& Complexo::operator++(){
// pré-incremento
        this->re = this->re + 1;
        this->im = this->im + 1;
        return *this; 
}

Complexo Complexo::operator++(int value){ // pós-incremento
        Complexo temp = *this;
        this->re = this->re + 1;
        this->im = this->im + 1;
        return temp; 
}