import java.util.Arrays; // Importing Arrays class for array operations
import java.util.Scanner; // Importing Scanner class for user input

public class Main {
    public static void main(String[] args) {
        // Creating a Scanner object to take input from the user
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number"); // Prompting user to enter a number
        int age = sc.nextInt(); // Reading an integer input
        System.out.print(age); // Printing the entered age

        // Declaring and initializing variables
        // Primitive data types: int, byte, short, long, float, double, char, boolean
        int b = 2000; // Integer variable
        int c = 2; // Another integer variable
        long phone1 = 100000000L; // Long variable (suffix 'L' indicates long)
        float aa = 4.3333f; // Float variable (suffix 'f' indicates float)
        boolean isadult = true; // Boolean variable (true/false)

        // Non-primitive data type: String
        String name = "Shubham"; // String variable
        System.out.println(name); // Printing the string
        System.out.print(name.length()); // Printing the length of the string

        String lastname = " Dogra "; // Another string variable
        // Concatenating two strings
        String fullname = name + lastname;
        System.out.println(fullname); // Printing the concatenated string
        System.out.println(fullname.charAt(1)); // Printing the character at index 1 of the string

        // String manipulation
        String a = "SHUBHYARRaR";
        String m = a.replace('S', 'b'); // Replacing 'S' with 'b' in the string
        System.out.println(m); // Printing the modified string

        String n = "SHUBHYARRR";
        System.out.println(n.substring(3, 10)); // Printing a substring from index 3 to 9

        // Arrays
        int[] marks = new int[3]; // Declaring an integer array of size 3
        marks[0] = 10; // Assigning value to the first element
        marks[1] = 20; // Assigning value to the second element
        marks[2] = 1; // Assigning value to the third element
        System.out.println(marks[0]); // Printing the first element of the array
        Arrays.sort(marks); // Sorting the array in ascending order
        System.out.println(marks[0]); // Printing the first element after sorting

        // Constants
        final int l = 20; // Declaring a constant variable (final keyword makes it immutable)
        // l = 1000; // Uncommenting this line will cause a compilation error

        // Type casting
        int k = 20 + (int) 18.9; // Explicit casting from double to int (decimal part is truncated)
        System.out.print(k); // Printing the result of the addition

        // Math operations
        System.out.println(Math.max(20, 1000)); // Printing the maximum of two numbers
        System.out.println((int) Math.random()); // Generating a random number and casting it to int
    }
}