abstract class Animal {
    abstract void walk();

}

class Horse extends Animal {
    public void walk() {
        System.out.println("Walk on 4 legs");
    }

    class chicken extends Animal {
        public void walk() {

            System.out.println("Walk on 4 legs");
        }
    }

}

public class encapsulation {
    public static void main (String[] args) {
    Horse h1 = new Horse();
       h1.walk();
    //   Animal A1 = new Animal() ; // error due to abstraction 
}
}