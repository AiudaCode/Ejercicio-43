public class Main
{
    public static void mostrarMatriz(Calcular obj)
    {
        String datos_matriz = "";
        // recorro con el primer ciclo for las filas de la matriz i
        for (int i = 0; i < 9; i++)
        {
            // recorro con el segundo ciclo for las columnas de la matriz j
            for (int j = 0; j < 9; j++)
            {
                // acumulo los datos de la matriz en la variable datos_matriz
                datos_matriz = datos_matriz + String.valueOf(obj.getMatriz(i, j)) + " ";
            }
            // salto de linea
            datos_matriz = datos_matriz + "\n";
        }
        // muestro la matriz
        System.out.println(datos_matriz);
    }
    public static void main(String[] args)
    {
        // se crea un objeto de la clase Calcular (Instanciaciación)
        Calcular obj = new Calcular();
        // llamo al metodo para dibujar la matriz
        obj.dibujarMatriz();
        // muestro la matriz y le paso el objeto obj de la clase Calcular como parametro
        mostrarMatriz(obj);
    }
}