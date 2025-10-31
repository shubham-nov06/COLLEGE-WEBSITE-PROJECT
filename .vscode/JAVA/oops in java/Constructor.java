class Construct {
    int a, b;

    // Construct() {
    // System.out.println("Im a non parameterized constructor"); // This is a non
    // parameterized constructor
    Construct(int a, int b) { // Parameterized constructor
        this.a = a;
        this.b = b;
        System.out.println(a);
        System.out.println("IM a parameterized constructor ");

    

        }
    
    Construct( Construct C2) {

        a = C2.a; // This is a copy constructor 

    }
    void display () {
        System.out.println(a);
    }

}

public class Constructor {
    public static void main(String[] args) {
        Construct C1 = new Construct(1, 3);
    Construct C2 = new Construct(C1); 
    C2.display();
    }
}
