using System;

public class Bienvenido2
{
    public static void Main(string[] args)
    {
        Console.Write("¡Bienvenido a ");
        Console.WriteLine("la programación en C#!");
    }
}

public class Bienvenido3
{
    public static void Main(string[] args)
    {
        Console.WriteLine("¡Bienvenido\na la\nprogramación en\nC#!");
    }
}

public class Bienvenido4
{
    public static void Main(string[] args)
    {
        Console.WriteLine("{0}\n{1}", "¡Bienvenido a", "la programación en C#!");
    }
}

public class Suma
{
    public static void Main(string[] args)
    {
        int numero1;
        int numero2;
        int suma;

        Console.Write("Escriba el primer entero: ");
        numero1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Escriba el segundo entero: ");
        numero2 = Convert.ToInt32(Console.ReadLine());

        suma = numero1 + numero2;
        Console.WriteLine("La suma es {0}", suma);
    }
}

public class Comparacion
{
    public static void Main(string[] args)
    {
        int numero1;
        int numero2;

        Console.Write("Escriba el primer entero: ");
        numero1 = Convert.ToInt32(Console.ReadLine());

        Console.Write("Escriba el segundo entero: ");
        numero2 = Convert.ToInt32(Console.ReadLine());

        if (numero1 == numero2)
            Console.WriteLine("{0} == {1}", numero1, numero2);

        if (numero1 != numero2)
            Console.WriteLine("{0} != {1}", numero1, numero2);

        if (numero1 < numero2)
            Console.WriteLine("{0} < {1}", numero1, numero2);

        if (numero1 > numero2)
            Console.WriteLine("{0} > {1}", numero1, numero2);

        if (numero1 <= numero2)
            Console.WriteLine("{0} <= {1}", numero1, numero2);

        if (numero1 >= numero2)
            Console.WriteLine("{0} >= {1}", numero1, numero2);
    }
}