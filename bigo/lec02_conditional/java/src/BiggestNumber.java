import java.util.Scanner;

public class BiggestNumber{
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        int a=inp.nextInt();
        int b=inp.nextInt();
        
        if(a>b) System.out.print(a);
        else System.out.print(b);
    }
}