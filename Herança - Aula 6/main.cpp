#include "pessoa.h"
#include "aluno.h"
#include <iostream>

using namespace std;

int main(){
    Pessoa p1{"Joao", "Itajuba-MG"};
    p1.imprime();

    Aluno a1{"Pedro", "Campinas", "ECO", 12345};
    a1.imprime();

    return 0;
}