
import java.util.*;

public class LamdaExpression {

    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<>(Arrays.asList(1, 2, 3, 4, 5, 6, 7, 8));

        // sum of even numbers using lambda:
        int sum = list.stream()
                .filter(x -> x % 2 == 0) // keep only even numbers
                .mapToInt(x -> x) // convert to IntStream
                .sum(); // sum them up

        System.out.println("Sum of even numbers: " + sum);

        // A lambda that prints an int
        // x -> System.out.println(x);

        // A lambda that takes two ints and returns their sum
        // (a, b) -> a + b;

        // A lambda with explicit types
        // (int a, int b) -> { return a + b; }

        // Lambdas and Streams Fit Together
        List<String> names = Arrays.asList("Alice", "Bob", "Charlie");

        names.stream()
                .filter(name -> name.startsWith("A"))
                .map(name -> name.toUpperCase())
                .forEach(System.out::println);

    }
}
