using System;

namespace HW_2.HW_2_3
{
    public class Fecha
    {
        public int mes;
        public int dia;
        public int año;

        
        public Fecha(int mes, int dia, int año)
        {
            this.mes = mes;
            this.dia = dia;
            this.año = año;
        }
        
        

        public string mostrarFecha()
        {
            return mes + " / " + dia + " / " + año;
        }

        public int getMes()
        {
            return mes;
        }

        public int getDia()
        {
            return dia;
        }

        public int getAño()
        {
            return año;
        }

        public void setMes(int mes)
        {
            this.mes = mes;
        }

        public void setDia(int dia)
        {
            this.dia = dia;
        }

        public void setAño(int año)
        {
            this.año = año;
        }
    }

    public class HW_2_3
    {
        
        public static void Main(string[] args)
        {
            
            Fecha FechaTest = new Fecha(5, 12, 2024);

            Console.WriteLine(FechaTest.mostrarFecha());
            
            Console.WriteLine("Mi sig cumple :D");
        }
    }
}