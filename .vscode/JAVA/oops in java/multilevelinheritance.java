interface Animal {
    public void walk(); 
}
interface Herbivore {
    // 
}
class Horse implements Animal , Herbivore  { // multiple inheritance 
public void walk() {
    System.out.println("Can walk on 4 legs");

}
}


public class multilevelinheritance {
    public static void main (String[] args) {
        Horse a1 = new Horse();
        a1.walk();
    }
    
}