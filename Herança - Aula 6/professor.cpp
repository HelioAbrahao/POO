#include <iostream>
#include "professor.h"

Professor::Professor(string n, string e, int s, int c, string i)
    : Pessoa{n, e}{
        siape = s;
        categoria = c;
        instituto = i;
    }


void Professor::imprime(){
    Pessoa::imprime(); // Imprimir nome e endereço 
    cout << "SIAPE: " << siape << endl;
    cout << "Categoria: " << categoria << endl;
    cout << "Instituto: " << instituto << endl;
}