using System;

public class HW_1_3
{
    public static void Main(string[] args)
    {
        /*
        Diseñe un programa que lea 2,500,000 votos otorgados a los tres candidatos a gobernador,
        e imprima el número del candidato ganador y su cantidad de votos.
        */

        Random ran = new Random();

        int cand1 = 0;
        int cand2 = 0;
        int cand3 = 0;
        int vot;

        for (int i = 0; i < 2500000; i++)
        {
            vot = ran.Next(0, 3);

            if (vot == 0)
            {
                cand1++;
            }
            else if (vot == 1)
            {
                cand2++;
            }
            else
            {
                cand3++;
            }
        }

        int[] list = { cand1, cand2, cand3 };

        for (int x = 0; x < 3; x++)
        {
            Console.WriteLine("Candidato " + (x + 1) + ": " + list[x] + " votos");
        }

        Console.WriteLine(" ");
        Console.WriteLine("*********************************************");
        Console.Write("Resultados: ");

        if (cand1 > cand2 && cand1 > cand3)
        {
            Console.Write("Candidato 1 gano!!! con " + cand1 + " votos");
        }
        else if (cand2 > cand1 && cand2 > cand3)
        {
            Console.Write("Candidato 2 gano!!! con " + cand2 + " votos");
        }
        else
        {
            Console.Write("Candidato 3 gano!!! con " + cand3 + " votos");
        }
    }
}