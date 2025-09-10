import java.util.Scanner;
/*
Determine the smallest number in an integer linked list
INPUT:
    Including several lines, each contains an integer <= 10^6
    0 is the signal terminating the linked list (0 IS NOT INCLUDING IN THE LIST)
    Data ensures that there are at least 1 element in the list. The number of element <= 10^5.
OUTPUT:
    A single line is the smallest number in the linked list
TC1:
input
2
3
0
output
2
*/

class Node{
    int info;
    Node next;
    
    public Node(){
        this.info=0;
        this.next=null;
    }
    
    public Node(int info, Node next){
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
        head=tail=null;
    }
    
    public void addLast(int x){
        Node p=new Node(x, null);
        if(isEmpty()){
            head=tail=p;
        } else{
            tail.next=p;
            tail=p;
        }
    }
    
    public int minNode(){
        if(isEmpty()){
            return Integer.MAX_VALUE; // TH ds null
        }
        int min=head.info;
        Node curr=head;
        while(curr != null){
            if (curr.info < min){
                min=curr.info;
            }
            curr=curr.next;
        }
        return min;
    }
}

public class MinimumElement {
    public static void main(String[] args) {
        Scanner inp=new Scanner(System.in);
        SList list=new SList();
        
        while(true){
            int x=inp.nextInt();
            if(x == 0){
                break;
            }
            list.addLast(x);
        }
        
        System.out.println(list.minNode());        
    }
}