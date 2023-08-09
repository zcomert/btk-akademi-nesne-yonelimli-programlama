import java.util.Arrays;
import java.util.Collections;
import java.util.List;

public class App {
    public static void main(String[] args) throws Exception {

        List<Employee> employees = Arrays.asList(
                new Employee("Zehra Dağ", 25d),
                new Employee("Ege Deniz", 21d),
                new Employee("Mutla Ak", 29d),
                new Employee("Figen Can", 28d),
                new Employee("Ahmet Denizli", 27d));

        writeList(employees);
        Collections.sort(employees);
        System.out.println("----");
        writeList(employees);
    }

    private static void writeList(Iterable collection) {
        for (Object item : collection) {
            System.out.println(item);
        }
    }
}
