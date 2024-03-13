/*
El departamento de Seguridad Pública y Tránsito de la CDMX desea saber de los n autos que entran a la ciudad,
cuántos entran con calcomanía de cada color. Conociendo el último dígito de la placa de cada automóvil
se puede determinar el color de la calcomanía, utilizando la siguiente relación:

El programa deberá imprimir lo siguiente:

Amarilla = 1-2
Rosa = 3-4
Roja = 5-6
Verde = 7-8
azul = 9-0

una tabla con la cantidad de autos por color de calcomanía.
Enviar un mensaje indicando el color de calcomanía de los autos que entraron más y los que entraron menos.
Imprimir un grafico de frecuencias y indicando el porcentaje de cada calcomanía

*/

using System.Collections;

class Seg_Pub
{
    public static void Main(String[] args)
    {


        String[] colors = { "Amarillo ", 
                            "Rosa     ", 
                            "Roja     ", 
                            "Verde    ", 
                            "Azul     " };
        int[] count = new int[5];


        Random ran = new Random();

        int placa = 0;
        
        Console.WriteLine("Dame el numero de autos que entraron en la ciudad: ");
        int num = Convert.ToInt32(Console.ReadLine());

        for (int i = 0; i < num; i++)
        {
            placa = ran.Next(0, 10);

            if (placa == 1 || placa == 2)
            {
                count[0]++;
            } else if (placa == 3 || placa == 4)
            {
                count[1]++;
            } else if (placa == 5 || placa == 6)
            {
                count[2]++;
                
            } else if (placa == 7 || placa == 8)
            {
                count[3]++;
            }
            else
            {
                count[4]++;
            }
            
        }

        int higher = 0;
        int lower = 0;

        int posh = 0; 
        int posl = 0; 


        /*
         * Only gets the highest and lowest, but not if they repeat
         */
        
        ArrayList hi = new ArrayList();
        
        ArrayList low = new ArrayList();


        
        
        for (int x = 0; x < 5; x++)
        {
            if (x == 0)
            {
                lower = count[x];
                posl = x;

                higher = count[x];
                posl = x;

            } else 
            {
                if (count[x] > higher && count[x] > lower)
                {
                    posh = x;
                    higher = count[x];
                
                } else if (lower > count[x])
                {
                    lower = count[x];
                    posl = x;
                }
            } }
        
        
            
        
        /*
         * This is the loop for when the highest or lowest repeats
         */

        hi.Add(posh);
        
        low.Add(posl);
        
        /*
        Console.WriteLine("Check:" + higher);
        Console.WriteLine("Check:" + lower);
        
        Console.WriteLine("Check list:" + hi[0]);
        Console.WriteLine("Check list:" + low[0]);
        */
 
        
        
        /*
         * Checking repeated highest 
         */
        for (int i = 0; i < 5; i++)
        {
            if (i != posh)
            {
                if (count[i] == higher)
                {
                    hi.Add(i);
                }
            }
        }

        
        /*
         * Checking repeated lowest
         */
        
        for (int i = 0; i < 5; i++)
        {
            if (i != posl)
            {
                if (count[i] == lower)
                {
                    low.Add(i);
                }

            }
        }

        /*
         * Here we print the highest & lowest
         */

        
        Console.WriteLine("Los autos que entraron mas son: ");
        for (int x = 0; x < hi.Count; x++)
        {
            Console.WriteLine("Carro color " + colors[(int)hi[x]] + " con " + count[(int)hi[x]] + " coches totales");


        }
        Console.WriteLine("");

        Console.WriteLine("Los autos que entraron menos son: ");

        for (int y = 0; y < low.Count; y++)
        {
            Console.WriteLine("Carro color " + colors[(int)low[y]] + " con " + count[(int)low[y]] + " coches totales");
            
        }
        
        /*
         * Grafico de frecuencias:
         */
        Console.WriteLine("");
        Console.WriteLine("Tabla de Frecuencias: ");
        Console.WriteLine("");

        double rep = 0;
        for (int x = 0; x < 5; x++)
        {
            Console.Write(colors[x]+ ": ");

            rep = Math.Round(((double)count[x]/(double)num) * 100);
            
            
            for (int y = 0; y < (int)rep; y++)
            {
                Console.Write("*");
            }

            Console.Write("("+rep + "%) \n");

        }
        
        
    }
}