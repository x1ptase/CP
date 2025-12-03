
class MyList {

    public Node head;
    public Node tail;

    public MyList() {
        head = null;
        tail = null;
    }

    public void insertTail(int x) {
        Node p = new Node(x);
        if (head == null) {
            head = tail = p;
        } else {
            tail.next = p;
            tail = tail.next;
        }
    }

    public Node minNode() {
        Node ans = head;
        Node cur = head;
        while (cur != null) {
            if (cur.info < ans.info) {
                ans = cur;
            }
            cur = cur.next;
        }
        return ans;
    }
}
