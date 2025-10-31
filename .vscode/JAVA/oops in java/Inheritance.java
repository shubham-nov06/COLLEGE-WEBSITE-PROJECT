// BAse class 
class Vehicle {
    String name;
    String brand;
    String logo;

}

// Child class
class Car extends Vehicle { // Single level inheritance
    public void printinfo() {
        System.out.println("Name is = " + name + " " + "logo is = " + " " + logo + " " + "brand is = " + brand);
    }
}

// Child class
class Truck extends Vehicle {
    public void printinfo() { // Multi level inheritance
        System.out.println(brand);
    }
}

public class Inheritance {
    public static void main(String[] args) {
        Car C1 = new Car();
        C1.name = "S1";
        C1.brand = "BMW";
        C1.logo = "BMW";
        C1.printinfo();
        Truck T1 = new Truck();
        T1.brand = "Toyota";
        T1.printinfo();
    }

}
