using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Cuantos empleados son ?: ");
        int num = int.Parse(Console.ReadLine());

        Console.WriteLine("Tomamos en cuenta que el salario base es igual a $30000.00 pesos");
        Console.WriteLine("***************************************************************************************");

        var empList = GenerateEmployeeList(num);

        foreach (var empData in empList)
        {
            int id = empData.Item1;
            double venta1 = empData.Item2;
            double venta2 = empData.Item3;
            double venta3 = empData.Item4;

            double comisVen = (venta1 + venta2 + venta3) * 0.10;
            double comBase = 30000.00;
            double comisTot = comisVen + comBase;

            Console.WriteLine($"Empleado ID: 000{id}. Ventas: (${venta1:F3}, ${venta2:F3}, ${venta3:F3}). Comision de Ventas: ${comisVen:F3}. Comision TOTAL con base = ${comisTot:F3}\n");
        }
    }

    static Tuple<int, double, double, double>[] GenerateEmployeeList(int num)
    {
        var empList = new Tuple<int, double, double, double>[num];
        Random random = new Random();

        for (int i = 0; i < num; i++)
        {
            double vent1 = random.NextDouble() * (150001 - 50000) + 50000;
            double vent2 = random.NextDouble() * (150001 - 50000) + 50000;
            double vent3 = random.NextDouble() * (150001 - 50000) + 50000;

            empList[i] = new Tuple<int, double, double, double>(i + 1, vent1, vent2, vent3);
        }

        return empList;
    }
}