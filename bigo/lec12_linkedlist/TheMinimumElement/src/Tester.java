
import java.util.Scanner;

class Tester {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        MyList ll = new MyList();
        while (true) {
            int n = sc.nextInt();
            if (n == 0) {
                break;
            }
            ll.insertTail(n);
        }
        System.out.println(ll.minNode().info);
    }
}
