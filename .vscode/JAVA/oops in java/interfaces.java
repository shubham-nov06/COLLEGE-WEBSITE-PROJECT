interface Animal {
    public void walk();
}
class Horse implements Animal {
public void walk() {
    System.out.println("Can walk on 4 legs");

}
}

public class interfaces {
    public static void main (String[] args) {
        Horse a1 = new Horse();
        a1.walk();
    }
    
    
}
