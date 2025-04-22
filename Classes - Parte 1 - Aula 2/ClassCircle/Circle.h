#ifndef CIRCLE_H
#define CIRCLE_H

class Circle{
    private:
        float radius;
        int x, y;
    public:
        Circle();
        Circle(float, int = 0, int = 0);
        ~Circle(){};

        // Funções membro interface
        float area();
        float diameter();
        void set_radius(float); // setter
        void set_origin(int, int);
        float get_radius(); // getter
        void imprime();
    }; 


#endif