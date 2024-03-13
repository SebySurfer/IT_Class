using System;

class HW_1_1
{
    static void Main(string[] args)
    {
        /*
        Una persona debe realizar un muestreo con 50 personas para determinar el promedio de peso de los niños, jóvenes,
        adultos y adultos mayores que existen en su zona habitacional. Se determinan las categorías con base en la
        siguiente tabla:

        El programa deberá solicitar la edad de la persona y su peso actual, al finalizar el programa mostrará la cantidad
        de personas por cada categoría, así como el peso promedio de cada una de ellas. Y una tabla de frecuencias de la
        cantidad de personas por categoría.
        */

        /*
        {var_counter, weight1, ... weight50, sum }
        */

        /*
        Calculating average per age group:
        */
        double[] nin = new double[52];
        double[] jov = new double[52];
        double[] ad_j = new double[52];
        double[] ad_m = new double[52];

        Random ran = new Random();

        int age = 0;
        double weight = 0.0;

        for (int i = 0; i < 50; i++)
        {
            age = ran.Next(0, 100);

            if (0 <= age && 13 > age)
            {
                weight = ran.NextDouble() * (45 - 1) + 1;
                nin[0]++;
                nin[i + 1] = weight;
            }
            else if (age >= 13 && age < 30)
            {
                weight = ran.NextDouble() * (100 - 45) + 45;
                jov[0]++;
                jov[i + 1] = weight;
            }
            else if (age >= 30 && age < 60)
            {
                weight = ran.NextDouble() * (100 - 45) + 45;
                ad_j[0]++;
                ad_j[i + 1] = weight;
            }
            else
            {
                weight = ran.NextDouble() * (80 - 45) + 45;
                ad_m[0]++;
                ad_m[i + 1] = weight;
            }

            age = 0;
        }

        /*
        [row][column]
        */
        double[][] list = { nin, jov, ad_j, ad_m };

        double sum = 0;

        // Summed all the weight values and stored it in the last cell of every list
        for (int i = 0; i < 4; i++)
        {
            for (int x = 0; x < 50; x++)
            {
                sum += list[i][x + 1];
            }
            list[i][51] = sum;
            sum = 0;
        }

        string[,] tabla = {
            {"Categoria      ", "Edad       ", "Cantidad", "Promedio"},
            {"Niños          ", "0 - 12     ", "", ""},
            {"Jovenes        ", "13-29      ", "", ""},
            {"Adultos        ", "30-59      ", "", ""},
            {"Adultos mayores", "60 y mas   ", "", ""}
        };

        // rounds to 3 decimals
        var round = new System.Globalization.CultureInfo("en-US");

        // Added our data to the table
        int integ = 0;
        for (int i = 0; i < 4; i++)
        {
            integ = (int)list[i][0];
            tabla[i + 1, 2] = integ.ToString();
            tabla[i + 1, 3] = (list[i][51] / list[i][0]).ToString("#.###", round);
            integ = 0;
        }

        Console.WriteLine("Resultados: ");

        for (int x = 0; x < 5; x++)
        {
            for (int y = 0; y < 4; y++)
            {
                Console.Write(tabla[x, y] + "                      ");
            }

            Console.WriteLine(" ");
        }

        Console.WriteLine(" ");
        Console.WriteLine("Tabla de Frecuencias: ");

        for (int i = 0; i < 4; i++)
        {
            Console.Write(tabla[i + 1, 0] + ": ");

            for (int x = 0; x < 100; x++)
            {
                if ((int)list[i][0] == x)
                {
                    break;
                }

                Console.Write("*");
            }

            int percentage = (int)Math.Round(((list[i][0]) / 50.0) * 100);
            Console.Write(" (" + percentage + "%)");
            Console.WriteLine(" ");
        }
    }
}