/*
Determine the smallest number in an integer linked list.

Input Format
Including several lines, each contains an integer ≤ 10^​6
​
0 is the signal terminating the linked list (0 is not included in the list).
Data ensures that there are at least 1 element in the list. The number of element ≤10^​5

Output Format
A single line is the smallest number in the linked list.

Sample test
input
2
3
0
output
2
*/

class Node {

    int info;
    Node next;

    public Node() {
    }

    public Node(int info) {
        this.info = info;
        this.next = null;
    }

}
