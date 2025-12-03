import java.util.Scanner;
/*
*   P=2*R*PI
*   S=R*R*PI
*/

public class Circle {
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        float PI=3.14f, R, P, S;  // 3.14f --> compiler hiểu đây là kiểu float
        R=inp.nextFloat();
        
        P=2*R*PI;
        S=R*R*PI;
        
        System.out.printf("%.2f\n%.2f", P, S);
    }
}
