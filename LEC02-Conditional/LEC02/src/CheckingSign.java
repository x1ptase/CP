
import java.util.Scanner;

/*
*   Viết chương trình nhập vào hai số thực a và b khác 0. 
*   Kiểm tra xem chúng có cùng dấu hay không. 
*   Hai số thực được gọi là “cùng dấu” nếu như chúng cùng dương hoặc cùng âm.
*   INPUT: 
    a, b (float) not equal to 0 (|a|, |b| <= 1000000)
    OUTPUT:
    If a and b have similar sign, print "YES". 
    Conversely, a and b have different sign, print "NO".
*   TC1:            TC2:
    2.1 -4.5        2.1 4.5
    NO              YES
*
*/


public class CheckingSign {
    public static void main(String[] args) {
        Scanner inp=new Scanner(System.in);
        float a, b;
        a=inp.nextFloat();
        b=inp.nextFloat();
        
        if(a*b > 0) System.out.print("YES");
        else System.out.print("NO");
    }
}
