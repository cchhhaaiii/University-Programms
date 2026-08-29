import java.util.Scanner;

public class UserInputHello {
    public static void main (String []args){
        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter your name : ");
            String name = sc.nextLine();
            System.out.println("Hello, " + name + "!!!");
        }
        }
    }
