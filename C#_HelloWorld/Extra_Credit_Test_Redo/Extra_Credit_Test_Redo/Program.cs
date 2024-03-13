using System;

class SquidGame
{
    public int Premio { get; set; }
    public int NumDeJugadores { get; set; }
    public bool Ganador { get; set; }

    public SquidGame(int premio, int numDeJugadores, bool ganador)
    {
        Premio = premio;
        NumDeJugadores = numDeJugadores;
        Ganador = ganador;
    }

    public SquidGame() { }

    public void Jugar(int num)
    {
        int surv = 0;
        string juego = "";

        if (num == 1)
        {
            surv = (int)(NumDeJugadores * 0.90);
            juego = "Luz Verde, Luz Roja";
        }
        else if (num == 2)
        {
            surv = (int)(NumDeJugadores * 0.60);
            juego = "Ppopgi";
        }
        else if (num == 3)
        {
            surv = (int)(NumDeJugadores * 0.40);
            juego = "El juego de la cuerda";
        }

        Console.WriteLine($"{surv} jugadores de {juego} pasan a la siguiente ronda");
    }

    public void FinJuego(bool allDes, bool indDes)
    {
        if (allDes && indDes)
        {
            Console.WriteLine($"Fin de Juego! Han perdido {Premio} millones, pero siguen vivos!");
        }
        else if (!indDes && Ganador)
        {
            Console.WriteLine($"Fin de Juego !! Has ganado {Premio} millones !");
        }
        else
        {
            Console.WriteLine("EL Juego continua");
            Console.WriteLine("Jugador eliminado");
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        int x, y, j;

        SquidGame Game1 = new SquidGame(1, 2, false);
        SquidGame Game2 = new SquidGame(1, 2, false);

        Console.WriteLine("Ingresa el premio para esta edicion del juego: ");
        x = int.Parse(Console.ReadLine());
        Game1.Premio = x;

        Console.WriteLine("Numero de jugadores");
        y = int.Parse(Console.ReadLine());
        Game1.NumDeJugadores = y;

        Console.WriteLine("Que juego van a jugar ");
        j = int.Parse(Console.ReadLine());
        Game1.Jugar(j);

        Console.WriteLine("Ingresa el premio para esta edicion del juego: ");
        x = int.Parse(Console.ReadLine());
        Game2.Premio = x;

        Console.WriteLine("Numero de jugadores");
        y = int.Parse(Console.ReadLine());

        Game2.NumDeJugadores = y;

        char a, b, c;
        bool l1, l2, l3;

        Console.WriteLine("Los jugadores quieren continuar? (s/n)");
        a = char.Parse(Console.ReadLine());
        l1 = (a == 's');

        Console.WriteLine("El jugador quiere seguir en el juego? (s/n)");
        b = char.Parse(Console.ReadLine());
        l2 = (b == 's');

        Console.WriteLine("Es usted el ganador? (s/n)");
        c = char.Parse(Console.ReadLine());
        Game2.Ganador = (c == 's');

        Game2.FinJuego(l1, l2);
    }
}