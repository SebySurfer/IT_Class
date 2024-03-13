

class Empleado()
{
    public string nombre;
    public string ap_pat;
    public double sal_men;

    public Empleado(string nombre, string ap_pat, double sal_men) : this()
    {
        this.nombre = nombre;
        this.ap_pat = ap_pat;
        this.sal_men = sal_men;

        if (sal_men < 0.0)
        {
            sal_men = 0.0;
        }

    }
    
    public String getNombre() {
        return nombre;
    }

    public String getAp_pat() {
        return ap_pat;
    }

    public double getSal_men() {
        return sal_men;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setAp_pat(String ap_pat) {
        this.ap_pat = ap_pat;
    }

    public void setSal_men(double sal_men) {
        this.sal_men = sal_men;
    }
    
}  


public class Program()
{
    public static void Main(string[] args)
    {

        Empleado emp1 = new Empleado("Wilson", "Mendov", 150000);
        Empleado emp2 = new Empleado("Cassandra", "Quintival", 200000);
        
        Console.WriteLine(emp1.getNombre() + ": " + emp1.getSal_men());
        Console.WriteLine(emp2.getNombre() + ": " + emp2.getSal_men());
        
        Console.WriteLine("Ya cambiado con 10%+:");
        
        emp1.setSal_men(emp1.getSal_men() * 1.10);
        emp2.setSal_men(emp2.getSal_men() * 1.10);
        
        Console.WriteLine(emp1.getNombre() + ": " + emp1.getSal_men());
        Console.WriteLine(emp2.getNombre() + ": " + emp2.getSal_men());
        
    }
    
    
}



