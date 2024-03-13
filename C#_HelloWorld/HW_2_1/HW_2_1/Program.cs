using System;

namespace HW_2.HW_2_1
{
    public class Factura
    {
        public string Pieza;
        public string Descr;
        public int Num;
        public double Precio;

        
        public Factura(string pieza, string descr, int num, double precio)
        {
            Pieza = pieza;
            Descr = descr;
            Num = num;
            Precio = precio;
        }

        public string GetPieza()
        {
            return Pieza;
        }

        
        
        public string GetDescr()
        {
            return Descr;
        }

        public int GetNum()
        {
            return Num;
        }

        public double GetPrecio()
        {
            return Precio;
        }

        
        
        public void SetPieza(string pieza)
        {
            Pieza = pieza;
        }

        public void SetDescr(string descr)
        {
            Descr = descr;
        }

        public void SetNum(int num)
        {
            Num = num;
        }

        public void SetPrecio(double precio)
        {
            Precio = precio;
        }

        
        
        public double ObtenerMontoFactura()
        {
            double p = 0;

            if (Num < 0)
            {
                Num = 0;
            }

            if (Precio < 0)
            {
                Precio = 0.0;
            }

            p = Num * Precio;

            return p;
        }
    }

    
    public class HW_2_1
    {
        public static void Main(string[] args)
        {
            Factura facturaTest = new Factura("0EV-303-23R", "Pieza chida", 6, 250.50);

            facturaTest.SetDescr("De hecho es mas chida que lo que pense");

            
            Console.WriteLine(facturaTest.GetDescr());
            
            
            Console.WriteLine(facturaTest.ObtenerMontoFactura());
        }
    }
}