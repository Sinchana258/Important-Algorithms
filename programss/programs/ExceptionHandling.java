
public class ExceptionHandling {
    public static void main(String[] args) {
        try {
            System.out.println("Inside try");
            int x = 5 / 0; // exception
        } catch (ArithmeticException e) {
            System.out.println("Caught: " + e);
        } finally {
            System.out.println("This always executes");
        }

        // try block can exist without catch ,but always with finally block
        try {
            System.out.println("Inside try");
            int y = 5 / 0; // this throws ArithmeticException
        } finally {
            System.out.println("Finally runs before exception propagates");
        }

        System.out.println("After try-finally"); // never reached
    }
}
