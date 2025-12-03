import java.util.Scanner;

public class CalculatePoint {
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        int x=inp.nextInt();
        int index=0;       // 45676 
        
        index+=x%10;    // 0 + 6 = 6
        x/=10;          // 4567
        
        index+=x%10;    // 6 + 7 = 13
        x/=10;          // 456
        
        index+=x%10;    // 13 + 6 = 19
        x/=10;          // 45
        
        index+=x%10;    // 19 + 5 = 24
        x/=10;          // 4
        
        index+=x%10;    // 24 + 4 = 28
            
        System.out.print(index%10);  // 4
   
    }
}
