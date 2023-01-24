import java.util.*;
class HelloWorld {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        while(true){
        System.out.print("Enter an integer(not zero): ");
        n=sc.nextInt();
        if(n!=0)
        break;
        }
        if(n>0)
        System.out.println(n + " is a postive number.");
        else
        System.out.println(n + " is negative");
    }
}