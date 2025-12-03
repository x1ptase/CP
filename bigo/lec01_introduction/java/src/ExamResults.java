import java.util.Scanner;

public class ExamResults {
    public static void main(String[] args){
        Scanner inp=new Scanner(System.in);
        float math, science, english;
        math=inp.nextFloat();
        science=inp.nextFloat();
        english=inp.nextFloat();
        float total=math + science + english;
        
        System.out.printf("%.2f",total);
    }
}
