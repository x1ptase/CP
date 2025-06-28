
import java.util.Scanner;

public class Sum{
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        int a=inp.nextInt();
        int b=inp.nextInt();
        int c=a+b;
        
//        System.out.print(a + " + " + b + " = " + c);
        System.out.printf("%d + %d = %d", a, b, c);
    }
}