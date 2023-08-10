namespace StackApp.Models;

public class Employee
{
    public Employee(string fullName, decimal salary)
    {
        FullName = fullName;
        Salary = salary;
    }
    public String FullName { get; set; } = string.Empty;
    public Decimal Salary { get; set; }

    public override String ToString()
    {
        return string.Concat(FullName, " ", Salary);
    }
}