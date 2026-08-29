public class SwapValues {
  public static void main (String []args){
    int a = 4;
    int b = 5;
    System.out.println("The value of A before swapping is : " + a + " and B is : " + b);
    int temp = a;
    a = b;
    b = temp;
    System.out.println("The value of A after swapping is : " + a + " and B is : " + b);
  }
}