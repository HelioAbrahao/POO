#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa{
    protected: // Meio do caminho entre o public e o private. A diferença é que com o protected as classes derivadas vão ter acesso ao nome e ao endereço e com o private não. 
        string nome;
        string endereco;
    public:
        Pessoa(string, string);
        ~Pessoa(){}
        void setEndereco(string);
        void imprime(); 
};

#endif