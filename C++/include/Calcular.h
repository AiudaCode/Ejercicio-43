#ifndef CALCULAR_H
#define CALCULAR_H


class Calcular
{
    public:
        Calcular();
        virtual ~Calcular();
        // declaro los metodos publicos, para dibujar la matriz y encapsular el vector bidimensional matriz[]
        void dibujarMatriz();
        void setMatriz(int fil, int col, int val);
        int getMatriz(int fil, int col);
    protected:

    private:
        // declaro el atributo privado matriz de tipo entero que tendra [9] filas y [9] columnas
        int matriz[9][9];
};

#endif // CALCULAR_H
