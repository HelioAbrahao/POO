#ifndef DATE_H
#define DATE_H

class Date{
    private:
        int d, m, y;
        mutable int count;
        static int howmany; // Variável que não pertence ao objeto, ela é da classe.

    public:
        Date(int = 1, int = 1, int = 1972);
        ~Date(); 

        int get_day() const{
            return d;
        }

        int get_mounth() const{
            return m;
        }

        int get_year() const{
            return y;
        }

        int get_count() const{
            return count;
        }

        void print() const;

        Date & set_day(int);
        Date & set_month(int);
        Date & set_year(int);
        static int how_many_instances(){
            return howmany;
        }
};

#endif

// Tomar como padrão: Em todas as funções que não tem a finalidade de alterar algo da sua classe, devemos utilizar o const. tipo de retorno nome() const{}