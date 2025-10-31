// Polymorphism 
class Student {
    String name;
    int age;

    public void printinfo(String name) {
        name = "Shubham";
 

    }

    public void printinfo(int age) { // FUNCTION OVERLOADING

    }

    public void printinfo(String name, int age) {
               System.out.println(name + " " + age );

    }

}

public class Polymorphism {
    public static void main(String[] args) {
        Student S1 = new Student();
        S1.name = "Shubham";
        System.out.println(S1.name);
        S1.printinfo("Shubham" , 10);

    }

}