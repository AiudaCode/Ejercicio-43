#include "Calcular.h"

Calcular::Calcular()
{
    // ctor
}

Calcular::~Calcular()
{
    //dtor
}

// implementacion de los metodos Setter y Getters de los atributos de la clase Calcular
void Calcular::setMatriz(int fil, int col, int val)
{
    // le asignare a la matriz el valor de val, en la posicion fil, col que se hayan pasado como parametro
    matriz[fil][col] = val;
}

int Calcular::getMatriz(int fil, int col)
{
    // retornare el valor que haya en la fila fil, columna col que se haya pasado como parametro
    return matriz[fil][col];
}


// implemnetacion del metodo para dibujar la matriz
void Calcular::dibujarMatriz()
{
    // declarare de una variable temporal de tipo entero: temp_1 y una variable val
    int temp = 1;
    // declaro e inicializo la variable temp_2 en 1
    int direccion;

    // recorrere con el primer ciclo for las filas i
    for (int i = 0; i < 9; i++)
    {
        // recorrrere con el segundo ciclo for las columnas j
        for (int j = 0; j < 9; j++)
        {
            // en la fila i, columna j se asignara el valor de 0 para no perdernos
            setMatriz(i, j, 0);
        }
    }

    // recorrere con el primer ciclo for las filas i
    for (int i = 0; i < 9; i++)
    {
        // le asigno a la variable direccion el valor de 1
        direccion = 1;
        // si la direccion es igual a 1
        if (direccion == 1)
        {
            // recorrrere con el segundo ciclo for las columnas j
            for (int j = 0; j < 9; j++)
            {
                // si el valor que hay en la fila i, columna j es igual a 0
                if (getMatriz(i, j) == 0)
                {
                    // entonces se le asignara en la fila i, columna j el valor actual de temp
                    setMatriz(i, j, temp);
                    // incrementamos la variale temp
                    temp++;
                }
            }
        }

        // incrementamos la variable direccion
        direccion++;
        // si la direccion es igual a 2
        if(direccion == 2)
        {
            // recorrrere con el segundo ciclo for las columnas k
            for (int k = 0; k < 9; k++)
            {
                // si el valor que hay en la fila k, columna (9-(i+1) es igual a 0
                if (getMatriz(k, (9-(i+1))) == 0)
                {
                    // entonces se le asignara en la fila k, columna (9-(i+1) el valor actual de temp
                    setMatriz(k, (9-(i+1)), temp);
                    // incrementamos la variale temp
                    temp++;
                }
            }
        }

        // incrementamos la variable direccion
        direccion++;
        // si la direccion es igual a 3
        if (direccion == 3)
        {
            // recorrrere con el segundo ciclo for las columnas k
            for (int k = 8; k >= 0; k--)
            {
                // si el valor que hay en la fila (9-(i+1), columna k es igual a 0
                if (getMatriz((9-(i+1)), k) == 0)
                {
                    // entonces se le asignara en la fila (9-(i+1), columna k el valor actual de temp
                    setMatriz((9-(i+1)), k, temp);
                    // incrementamos la variale temp
                    temp++;
                }
            }
        }
        // incrementamos la variable direccion
        direccion++;
        // si la direccion es igual a 4
        if (direccion == 4)
        {
            // recorrrere con el segundo ciclo for las columnas k
            for (int k = 8; k >= 0; k--)
            {
                // si el valor que hay en la fila k, columna i es igual a 0
                if (getMatriz(k, i) == 0)
                {
                    // entonces se le asignara en la fila k, columna i el valor actual de temp
                    setMatriz(k, i, temp);
                    // incrementamos la variale temp
                    temp++;
                }
            }
        }
    }
}
