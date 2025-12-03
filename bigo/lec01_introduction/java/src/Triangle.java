import java.util.Scanner;

public class Triangle{
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        double a,b,c,S,P;
        a=inp.nextDouble();
        b=inp.nextDouble();
        c=inp.nextDouble();
        
        P=a+b+c;
        double s=P/2;
        S=Math.sqrt(s*(s-a)*(s-b)*(s-c));
        
        System.out.printf("%.2f %.2f", P, S);
    }    
}