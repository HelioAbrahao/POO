#include "pessoa.h"
#include "aluno.h"
#include "professor.h"
#include <iostream>

using namespace std;

int main(){
    Pessoa p1{"Joao", "Itajuba-MG"};
    p1.imprime();
    cout << endl; 
    Aluno a1{"Pedro", "Campinas", "ECO", 12345};
    a1.imprime();
    cout << endl;
    Professor pr1 {"Jose", "Sao Paulo - SP", 678910, 3, "ICA"};
    pr1.imprime();
    cout << endl;
    
    return 0;
}