/*Welcome to LINKIT Lab
JAVA Compiler*/

import java.util.*;
public class Main
{
	public static void main(String[] args)
	{
	Scanner sc = new Scanner(System.in);
	int a,b,c;
	System.out.println("Enter the value of a: ");
	a= sc.nextInt();
	System.out.println("Enter the value of b: ");
	b=sc.nextInt();
	System.out.println("Enter the value of c: ");
	c=sc.nextInt();
	if((a>b)&&(a>c))
	System.out.println(a + " is maximum");
	if((b>a)&&(b>c))
	System.out.println(b + " is maximum");
    if((c>b)&&(c>a))
    System.out.println(c + " is maximum");
	}
}