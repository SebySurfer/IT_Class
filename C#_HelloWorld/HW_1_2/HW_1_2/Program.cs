using System;
using System.Collections.Generic;

class Program
{
    static decimal CalcularPago(int peso, bool descuento)
    {
        decimal pago = peso * 28.50m;
        return descuento ? pago * 0.85m : pago;
    }

    static void Main()
    {
        List<(int, bool)> clientes = new List<(int, bool)>();

        Random random = new Random();

        for (int i = 0; i < 15; i++)
        {
            int numPes = random.Next(1, 26);
            bool desc = numPes > 10;
            clientes.Add((numPes, desc));
        }

        decimal totalGanado = 0;

        for (int i = 0; i < clientes.Count; i++)
        {
            Console.WriteLine($"Cliente {i + 1}: {ClienteStr(clientes[i])}");
            totalGanado += CalcularPago(clientes[i].Item1, clientes[i].Item2);
        }

        Console.WriteLine("\n**********************************************\n");
        Console.WriteLine($"En total la tienda gano ${totalGanado:.3}");

    }

    static string ClienteStr((int, bool) cliente)
    {
        string roundFormat(decimal value) => value.ToString("#.###");

        int peso = cliente.Item1;
        bool desc = cliente.Item2;

        if (desc)
        {
            decimal pagoAntesDescuento = peso * 28.50m;
            decimal pagoConDescuento = CalcularPago(peso, desc);
            return $"Agarró {peso}kg y hubiera pagado ${roundFormat(pagoAntesDescuento)}, pero con 15% de descuento fue ${roundFormat(pagoConDescuento)} pesos";
        }
        else
        {
            decimal pagoSinDescuento = peso * 28.50m;
            return $"Agarró {peso}kg y pagó ${roundFormat(pagoSinDescuento)} pesos";
        }
    }
}