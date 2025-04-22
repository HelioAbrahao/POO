#include <iostream>
#include "tempo.h"

using namespace std;

int main(){
    Tempo padrao1;
    Tempo custom(11, 20, 36); // Dependendo do tipo de inicialização do objeto, um construtor diferente é chamado. 

    cout << "Hora padrao: ";
    padrao1.Imprime();

    cout << "\nHora customizada: ";
    custom.Imprime();

    padrao1.setTempo(11, 25, 00);
    cout << "\nHora padrao atualizada: ";
    padrao1.Imprime();

    padrao1.setTempo(110, 25, 70);
    cout << "\nTestando horas irracionais: ";
    padrao1.Imprime();

    return 0;
}