#ifndef COMPLEXO_H
#define COMPLEXO_H

class Complexo {
    private:
        float re, im;
    public:
        Complexo(float = 0.0, float = 0.0);
        ~Complexo(){};

        // interface
        void print();
        Complexo add(Complexo&);
        Complexo sub(Complexo&);

        // sobrecarga de operadores 
        Complexo operator+(Complexo&);
        Complexo operator-(Complexo&);
        bool operator!();
        Complexo& operator++();
        Complexo operator++(int); // pos-incremento
};

#endif  