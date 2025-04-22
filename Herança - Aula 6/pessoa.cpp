/*
Um conceito raramente existe de forma isolada. Ele coexiste com outros conceitos relacionados e obtém muito de seu poder de seus relacionamento com outros conceitos. Como nós criamos classes para representar conceitos, a questão que emerge é: Como representar relacionamentos entre classes? 
A noção de uma classe derivada e seus mecanismo associados servem para expressar relacionamento hierárquicos, onde há comunalidade entre as classes. Os conceitos de círculo e triângulo estão relacionados, pois ambos são formas geométricas. Eles têm esta característica comum. Portanto, podemos definir uma classe Circulo e outra Triangulo a partir de uma classe Forma, definida previamente. 

Nesse caso, Forma torna-se uma classe base(ou superclasse), e Circulo e Triangulo são classes derivadas (ou subclasses). 

* Herança é um relacionamento entre classes em que é criada uma classe(derivada) que absorve atributos e comportamentos de uma classe existente(base) e acrescenta novas capacidades e/ou personaliza outras. A classe derivada criada continua tendo as características de sua base, mas é mais específica para um fim. 
Por isso o nome herança: Uma classe derivada herda os membros de dados e funções membro de uma classe base. 

Resumindo: 
 * Herança é ma forma de reutilização de software na qual novas classes são criadas a partir de classes já existentes:
    - Absorvendo seus atributos e comportamentos;
    - Adicionando ou modificando funcionalidades; 
    - Tornando-a mais específica para sua finalidade. 
*/

#include <iostream>
#include "pessoa.h"

using namespace std;

Pessoa::Pessoa(string n, string e)
    :nome{n}, endereco{e}{
}
void Pessoa::setEndereco(string e){
    endereco = e; 
}
       
void Pessoa::imprime(){
    cout << "Nome: " << nome << endl;
    cout << "Endereco: " << endereco << endl; 
}