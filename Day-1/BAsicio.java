
import java.util.Scanner;
class HelloWorld {
    public static void main(String[] args) {
         Scanner sc = new Scanner(System.in);
         int radius;
         System.out.println("Enter the radius of the circle: ");
         radius = sc.nextInt();
         double pi=3.1415;
         double area = pi*radius*radius;
         System.out.println("The area of the circle is: "+area);
    }
}