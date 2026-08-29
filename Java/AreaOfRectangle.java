import java.util.Scanner;

public class AreaOfRectangle {
  public static void main (String []args){
    try (Scanner sc = new Scanner(System.in)) {
        System.out.println("Enter Width in Meters :");
        double Width = sc.nextDouble();
        System.out.println("Enter Length in Meters:");
        double Length = sc.nextDouble();
        System.out.println("Area of the Rectangle =" + (Width*Length) + "m");
    }
  }
}