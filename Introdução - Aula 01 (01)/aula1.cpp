// #include <iostream> // entrada e saída

// using namespace std;

// int square(int num);

// int main(){
//     int n = 0; // Melhor prática: Sempre inicializar a variável.
//     cout << "Entre com um inteiro: ";
//     cin >> n;
//     cout << "Resultado (quadrado) = " << square(n) << "\n" << "Teste do executavel";

//     return 0;
// }

// int square(int num){
//     return num * num;
// }


/*
Tipos de inicialização
double d1 = 2.3; 
double d2 {2.3}; // É um inicializador mais forte na checagem de tipos, não permitindo atribuições com perda de informação.
int i1 = 7.2; // i7 recebe o valor 7 (compilador deixa um tipo ser atribuido a outro(mesmo a parte do 0.2 sendo truncada))
int i2 {7.2} // erro de compilação: tentativa de conversão de número real para inteiro

double d3 = {2.3}; // É uma inicialização válida, porém é redundante

int v[]{1,2,3,4,5};
*/

/*
Não há necessidade de declarar explicitamente o tipo da variável. É possível utilizar a palavra auto para isso, o que faz com que o compilador consiga detectar a partir daquilo que foi inserido na variável qual o tipo dela. 
auto b = true; // bool
auto ch = 'x'; // char
auto i = 123; // int 
*/


// #include <iostream>

// using namespace std;

// int main(){
//     int vetor[]{1,2,3,4,5,6,7,8,9,10};

//     cout << "Percorrendo vetor da maneira normal: " << "\n";
//     for(int i = 0; i < 10; i++){
//         cout << vetor[i] << " - "; 
//     }

//     cout << "\n\nPercorrendo com range-for: " << "\n";
//     for(int x:vetor){
//         cout << x << " - ";
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// int main(){ 
//     string nome = "";
//     string sobre = "";

//     cout << "Entre com seu nome: ";
//     // cin >> nome; -> Só le até um espaço ou um enter. Para pegar toda a linha, há a necessidade de utilizar o comando getline
//     getline(cin, nome);

//     cout << "Agora entre com seu sobrenome: ";
//     getline(cin, sobre);

//     string nome_completo = nome + " " + sobre;
//     cout << "Nome completo: " << nome_completo << endl;


//     return 0;
// }

// #include <iostream>

// using namespace std;

// int main(){
//     int a = 50;
//     cout << "Valor de a: " << a << "\n";
//     cout << "Endereco de a: " << &a << "\n";

//     int *ptr_a = nullptr;
//     ptr_a = &a;
//     cout << "Valor do ptr_a: " << ptr_a << "\n"; // Vai imprimir o endereço de A, que é aquilo que o ponteiro a está armazenando
//     cout << "Valor contido dentro da variavel cujo endereco esta armazenado em ptr_a (no caso, o valor da variavel a): " << *ptr_a << "\n"; // Saída será 50 (aqui foi utilizado um valor de indireção)

//     int &refa = a; // Referencia deve sempre estar apontando para algum lugar
//     cout << "Valor apontado pelo refa: " << refa << endl; // Referencia serve basicamente como um apelido (alias)

//     return 0;
// }

// #include <iostream>

// using namespace std;

// void soma(int x, int y, int z){
//     z = x + y;
// }

// void soma2(int *x, int *y, int *z){
//     *z = *x + *y;
// }

// void soma3(int &x, int &y, int &z){
//     z = x + y;
// }

// int main(){
//     int a = 10, b = 20, c = 0;
//     soma(a, b, c);
//     cout << "Valor de c por valor: " << c << endl; 

//     soma2(&a, &b, &c);
//     cout << "Valor de c por referencia(ponteiros): " << c << endl;

//     soma3(a, b, c);
//     cout << "Valor de c por referencia(referencia): " << c << endl;

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#define SIZE 50

using namespace std;

int main(){
    int *vet = nullptr;
    vet = new int[SIZE];
    
    for(int i = 0; i < SIZE; i++){
        vet[i] = rand()%10;
    }

    for(int i = 0; i < SIZE; i++){
        cout << vet[i] << " ";
    }

    cout << endl;

    delete[] vet;
    return 0;
}

// Tempo temp {0, 30, 5};
// Tempo *temptr = &temp; 

// temp.hora = 10;
// cout << "Membro hora: " << temptr->hora << endl;