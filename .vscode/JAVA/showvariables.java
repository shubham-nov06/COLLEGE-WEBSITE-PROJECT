class Student {
    String name;
    int age;

    Student(String n, int a) {
        name = n;
        age = a;
    }

void showdetails() {
    String grade = "A+";
    System.out.println("Name is " + name );
    System.out.println("Age is = " + age);
    System.out.println("Grade is " + grade );
}

}

public class showvariables {
    public static void main(String[]args){
    Student S1 = new Student("Shubham", 18);
    S1.showdetails();    
    
    }
}
