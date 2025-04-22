#ifndef TEMPO_H
#define TEMPO_H

// arquivo de cabeçalho (header)
class Tempo{
    // membros privados
    private:
        int hora, minuto, segundo;

    public:
        Tempo(); // construtor - inicializar
        Tempo(int, int, int);
        void setTempo(int, int, int);
        void Imprime();
        ~Tempo() { }; // destruindo
};

#endif