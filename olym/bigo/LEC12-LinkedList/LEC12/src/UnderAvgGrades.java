
import java.util.Scanner;

/*
You are given a linked list containing grades in form of float number. 
Print the list of under-average grades (< 5.0)
INPUT
    Including several lines, each contains a float grade n (0 <= n <= 10) in the list. 
    -1 is a signal terminating the input (-1 is not included in the list).
    Data ensures that there are at least 1 element in the list
OUTPUT
    Print the list of under-average grades, each is in a line following the input order
TC1:
input
2.5
3
5.2
0
-1
output
2.5
3
0
*/
class Node{
    double info;
    Node next;
    
    public Node(){
        this.info=0;
        this.next=null;
    }
    
    public Node(double info, Node next){
        this.info=info;
        this.next=next;
    }
}

class SList{
    Node head, tail;
    
    public SList(){
        head=tail=null;
    }
    
    public boolean isEmpty(){
        return head==null;
    }
    
    public void clear(){
        head=null;
    }
    
    public void addLast(double x){
        Node p=new Node(x, null);
        if(isEmpty()){
            head=tail=p;
        }
        else{
            tail.next=p;
            tail=p;
        }
    }
    
    public void traverse(){
        Node p=head;
        while(p != null){
            if(p.info < 5.0)
                System.out.println(p.info);
            p=p.next;   
        }
    }
}

public class UnderAvgGrades {
    public static void main(String[] args) {
        Scanner inp=new Scanner(System.in);
        SList list=new SList();
        while(true){
            double x=inp.nextDouble();
            if(x == -1){
                break;
            }
            list.addLast(x);
        }
        list.traverse();
    }
}
