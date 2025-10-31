import java.util.Scanner;

public class basic {
    public static void main(String[] args) {
        // Create a Scanner object to take input from the user
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number");
        int age = sc.nextInt(); // Read an integer input
        System.out.println(age); // Print the input

        // ERROR: Duplicate main method
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter age ");
            int age = sc.nextInt();
            System.out.print(age);
        }

        // ERROR: Another duplicate main method
        public static void main(String[] args) {
            Scanner sc = new Scanner(System.in);
            System.out.print("Enter your age = ");
            int age = sc.nextInt();
            System.out.println(age);

            // ERROR: Yet another duplicate main method
            public static void main(String[] args) {
                Scanner sc = new Scanner(System.in);
                System.out.print("Enter your age ");
                int age = sc.nextInt();
                System.out.println(age);
            }

            // Taking a float input
            Scanner sc = new Scanner(System.in);
            System.out.println("Enter a num = ");
            float a = sc.nextFloat();
            System.out.println(a);

            // Taking a string input
            System.out.print("Enter your name ");
            String name = sc.nextLine(); // Read a full line of input
            System.out.print(name);

            // Example of a boolean condition
            boolean sunisup = false;
            if (sunisup == true) {
                System.out.println("Good morning ");
            } else {
                System.out.println("GOOD NINI ");
            }

            // Example of arithmetic operations and conditions
            int a = 50;
            int b = 1000;
            int c = 4000 + a + b;
            if (c >= 10000 && c <= 5000) {
                System.out.println("c is greater than 1000");
            } else if (c > 5000 || c < 6000) {
                System.out.println("C is greater than 5000 but less than 6000");
            }

            // Example of nested conditions
            System.out.print("Enter how much money you have ");
            Scanner sc = new Scanner(System.in);
            int n = sc.nextInt();
            if (n >= 1 && n <= 10) {
                System.out.println("You can buy a pencil");
            } else if (n > 10 && n < 50) {
                System.out.println("You can buy a pen");
            } else if (n > 50 || n <= 100) {
                System.out.println("You can buy two pens");
            }

            // Example of a switch statement
            int day = 1;
            switch (day) {
                case 1:
                    System.out.println("Monday");
                    break;
                case 2:
                    System.out.println("Tuesday");
                case 3:
                    System.out.println("Wednesday");
                case 4:
                    System.out.println("Thursday");
                case 5:
                    System.out.println("Friday");
                case 6:
                    System.out.println("Saturday");
                case 7:
                    System.out.println("Sunday");
            }

            // Example of array input and output
            Scanner sc = new Scanner(System.in);
            System.out.println("How many numbers do you want in the array?");
            int n = sc.nextInt();
            int[] arr = new int[n];
            System.out.println("Enter elements:");
            for (int i = 0; i < n; i++) {
                arr[i] = sc.nextInt();
            }
            System.out.println("Numbers are:");
            for (int i = 0; i < n; i++) {
                System.out.println("Yeeee " + arr[i]);
            }

            // Example of a while loop
            int i = 1;
            while (i <= 20) {
                System.out.println("Yo Rupali Yo Rupali");
                i++;
            }

            // Example of a do-while loop
            int a = 20;
            do {
                System.out.println(a);
                a--;
            } while (a > 1);

            // Another do-while loop example
            Scanner sc = new Scanner(System.in);
            int a = 0;
            do {
                System.out.print("Enter your number = ");
                a = sc.nextInt();
                System.out.println("Here is your number = " + a);
            } while (a > 1);
            System.out.print("The end");

            // Example of an infinite while loop with break and continue
            int i = 0;
            while (true) {
                System.out.println(i);
                i++;
                if (i == 2) {
                    i++; // Update value before continue
                    continue;
                }
                if (i == 20) {
                    break;
                }
            }

            // Example of exception handling
            int[] arr = {0, 1, 2, 3, 4};
            try {
                System.out.println(arr[5]); // This will throw an exception
            } catch (Exception exception) {
                // Handle the exception
            }
            System.out.println("YO YO");

            // Example of methods
            public static void printJava() {
                System.out.println("My name is Aadi");
            }

            public static void name(String name) {
                System.out.print("Your name is = " + name);
            }

            public static void main(String[] args) {
                printJava();
                name("Shubham");

                public static void num(int a, int b) {
                    int sum = a + b;
                    System.out.print("Your number is = " + sum);
                }

                public static void main(String[] args) {
                    num(2, 2);
                }
            }
        }
    }
}
