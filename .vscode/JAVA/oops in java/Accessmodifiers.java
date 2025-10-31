class vehicle{
    // PUblic is a access modifier
    public String name = "Toyota";

    private String cost ; // private is a acces modifier

    // getters and setters
    public String getcost() { // getter 
 return this.cost ;
    }

    public void  setcost(String costt) {
        this.cost = costt; 
    }

    public void printinfo() {
        //
    }
}

public class Accessmodifiers {
    public static void main(String[] args) {
        vehicle V1 = new vehicle();
        V1.setcost("200000000");
        System.out.println(V1.getcost());
    }

}