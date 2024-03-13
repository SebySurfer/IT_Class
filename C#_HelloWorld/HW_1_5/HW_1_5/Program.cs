using System;

class HW_1_5
{
    static void Main(string[] args)
    {
        /*
        Un teatro otorga descuentos según la edad del cliente. Determinar la cantidad de dinero que el teatro
        deja de percibir por cada una de las categorías. Tomar en cuenta que los niños menores de 5 años no pueden
        entrar al teatro y que existe un precio único en los asientos. Los descuentos se hacen tomando en cuenta
        el siguiente cuadro:
         */
        Console.WriteLine("Cuanta gente quieres que entre para este obra de teatro? ");
        int peop = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("Cuanto va a costar el ticket?");
        double cost = Convert.ToDouble(Console.ReadLine());
        Console.WriteLine("**************************************************************************");
        Console.WriteLine("");

        string[,] table = {
            {"             ", "Edad       ", "Descuento    ", "Dinero descontado"},
            {"Categoria 1: ", "5-14       ", " 35%         $", ""},
            {"Categoria 2: ", "15-19      ", " 25%         $", ""},
            {"Categoria 3: ", "20-45      ", " 10%         $", ""},
            {"Categoria 4: ", "46-65      ", " 25%         $", ""},
            {"Categoria 5: ", "66 y mayor ", " 35%         $", ""}
        };

        Random ra = new Random();

        int age = 0;

        int[] guestList = new int[5];
        double[] disc = {0.35, 0.25, 0.10, 0.25, 0.35};

        for (int v = 0; v < peop; v++)
        {
            age = ra.Next(5, 100);

            if (age >= 5 && age <= 14)
            {
                guestList[0]++;
            }
            else if (age > 14 && age <= 19)
            {
                guestList[1]++;
            }
            else if (age > 19 && age <= 45)
            {
                guestList[2]++;
            }
            else if (age > 45 && age <= 65)
            {
                guestList[3]++;
            }
            else
            {
                guestList[4]++;
            }

            double hold = 0;

            for (int x = 1; x <= 5; x++)
            {
                for (int y = 3; y <= 3; y++)
                {
                    hold = guestList[x - 1] * cost * disc[x - 1];
                    table[x, y] = hold.ToString("#.###");
                }
            }
        }

        for (int x = 0; x < 6; x++)
        {
            for (int y = 0; y < 4; y++)
            {
                Console.Write(table[x, y]);
            }
            Console.WriteLine(" ");
        }
    }
}