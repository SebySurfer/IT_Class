using System;

public class Variables {

    public static void Myclass()
    {
        Console.WriteLine("Give me an int");
        int a = Convert.ToInt32(Console.ReadLine());
        
        Console.WriteLine("Give me a short");
        short b = Convert.ToInt16(Console.ReadLine());
        
        Console.WriteLine("Give me a long");
        long c = Convert.ToInt64(Console.ReadLine());
        
        Console.WriteLine("Give me byte");
        byte d = Convert.ToByte(Console.ReadLine());
        
        Console.WriteLine("Give me a boolean");
        bool e = Convert.ToBoolean(Console.ReadLine());
        
        Console.WriteLine("Give me a double ");
        double f = Convert.ToDouble(Console.ReadLine());
        
        Console.WriteLine("Give me a float ");
        float g = Convert.ToSingle(Console.ReadLine());
        
        Console.WriteLine("Give me a char ");
        char h = Convert.ToChar(Console.ReadLine());
        

    }


}