#include "aluno.h"
#include <iostream>

using namespace std;

Aluno::Aluno(string n, string e, string c, int m)
    : Pessoa{n, e}, curso{c}, matricula{m}{
}
        
void Aluno::setCurso(string c){
    curso = c;
}  

void Aluno::imprime(){
    Pessoa::imprime();
    cout << "Curso: " << curso << endl;
    cout << "Matricula: " << matricula << endl; 

}