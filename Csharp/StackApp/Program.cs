using StackApp.Contract;
using StackApp.Models;

// Array
var numbers = new int[] { 23, 44, 55 };     

// List<T>
var employees = new List<Employee>()        
{
    new Employee("Ahmet Can",20),
    new Employee("Mehmet Dağ",25),
    new Employee("Filiz Güneş",30)
};

// Datetime
var dates = new LinkedList<DateTime>(new DateTime[]{
    DateTime.Now,
    DateTime.Now.AddDays(7),
    DateTime.Now.AddHours(5)
});

IStack<int> stack_number = new LinkedListStack<int>(numbers);
IStack<Employee> stack_employee = new LinkedListStack<Employee>(employees);
IStack<DateTime> stack_date = new LinkedListStack<DateTime>(dates);