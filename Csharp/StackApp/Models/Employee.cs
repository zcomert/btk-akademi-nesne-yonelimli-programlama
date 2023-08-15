namespace StackApp.Models;

public class Employee
{
    public Employee()
    {
        
    }
    public Employee(string firstName, string lastName, decimal salary)
    {
        FirstName = firstName;
        LastName = lastName;
        Salary = salary;
    }

    public String FirstName { get; set; } = string.Empty;
    public String LastName { get; set; }
    public Decimal Salary { get; set; } = 0;

    public String FullName => FirstName + " " + LastName;
    
    public override String ToString()
    {
        return string.Concat(FullName, " ", Salary);
    }
}