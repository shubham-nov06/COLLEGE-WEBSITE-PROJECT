// This is a Java program to demonstrate the use of various operators in Java.
public class operators {
    public static void main(String[] args) {
        // Declare and initialize two integer variables
        int a = 10, b = 5;

        // Demonstrating Arithmetic Operators
        System.out.println("Arithmetic Operators:");
        System.out.println("a + b = " + (a + b)); // Addition
        System.out.println("a - b = " + (a - b)); // Subtraction
        System.out.println("a * b = " + (a * b)); // Multiplication
        System.out.println("a / b = " + (a / b)); // Division
        System.out.println("a % b = " + (a % b)); // Modulus (remainder)

        // Demonstrating Relational Operators
        System.out.println("\nRelational Operators:");
        System.out.println("a > b = " + (a > b)); // Greater than
        System.out.println("a < b = " + (a < b)); // Less than
        System.out.println("a == b = " + (a == b)); // Equal to
        System.out.println("a != b = " + (a != b)); // Not equal to

        // Demonstrating Logical Operators
        System.out.println("\nLogical Operators:");
        System.out.println("(a > b) && (a != b) = " + ((a > b) && (a != b))); // Logical AND
        System.out.println("(a > b) || (a == b) = " + ((a > b) || (a == b))); // Logical OR
        System.out.println("!(a == b) = " + (!(a == b))); // Logical NOT

        // Demonstrating Assignment Operators
        System.out.println("\nAssignment Operators:");
        int c = a; // Assign value of 'a' to 'c'
        System.out.println("c = " + c);
        c += b; // Add 'b' to 'c' and assign the result to 'c'
        System.out.println("c += b -> " + c);
        c -= b; // Subtract 'b' from 'c' and assign the result to 'c'
        System.out.println("c -= b -> " + c);
        c *= b; // Multiply 'c' by 'b' and assign the result to 'c'
        System.out.println("c *= b -> " + c);
        c /= b; // Divide 'c' by 'b' and assign the result to 'c'
        System.out.println("c /= b -> " + c);
        c %= b; // Compute the remainder of 'c' divided by 'b' and assign the result to 'c'
        System.out.println("c %= b -> " + c);
    }
}
