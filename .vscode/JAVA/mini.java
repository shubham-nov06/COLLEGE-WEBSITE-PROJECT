import java.util.Scanner;

public class mini {
    public static void main(String[] args) {
        // Mini project
        Scanner sc = new Scanner(System.in);
        
        
      int   mynum = (int)(Math.random()*100);
        int usernum = 0 ;
        do {
            System.out.print("Guess the  number = ");

            usernum = sc.nextInt();

            if (usernum == mynum) {
                System.out.println("Nyc yarrrrrr");
                break;
            } else if (usernum > mynum) {
                System.out.println("Your num is too bigger ");
            }  else{
                System.out.println("Your num is too small ");
            }

        } while (usernum >= 0);
        // if (usernum < 0) {
        //     System.out.println("Lol the number is " + mynum);
        // }
System.out.println("My number was " + mynum);
    }
}
