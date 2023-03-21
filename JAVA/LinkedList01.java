class LL {
    Node head;
    private int size;

    LL() {
        size = 0;
    }

    class Node {
        String data;
        Node next;

        Node(String data) {
            this.data = data;
            this.next = null;
            size++;
        }

    }

    public void addFirst(String data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        newNode.next = head;
        head = newNode;
    }

    public void addLast(String data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node currntNode = head;
        while (currntNode.next != null) {
            currntNode = currntNode.next;
        }
        currntNode.next = newNode;
    }

    public void deleteFirst() {
        if (head == null) {
            System.out.println("List is empty");
            return;
        }
        head = head.next;
        size--;
    }

    public void deleteLast() {
        if (head == null) {
            System.out.println("List is empty!");
            return;
        }
        size--;
        if (head.next == null) {
            head = null;
            return;
        }
        Node secondLastNode = head;
        Node lastNode = head.next;
        while (lastNode.next != null) {
            secondLastNode = secondLastNode.next;
            lastNode = lastNode.next;
        }
        secondLastNode.next = null;

    }

    public void printList() {
        if (head == null) {
            System.out.println("List is empty!");
            return;
        }
        Node currntNode = head;
        while (currntNode != null) {
            System.out.print(currntNode.data + "->");
            currntNode = currntNode.next;
        }
        System.out.println("\n");

    }

    public int getSize() {
        return size;
    }

    public void addMiddle(int id, String data) {
        if (id >= size || id < 0) {
            System.out.println("Invalid index");
            return;
        }
        Node newNode = new Node(data);
        Node curntNode = head;
        Node nextNode = head.next;
        for (int i = 1; i < id; i++) {
            curntNode = nextNode;
            nextNode = nextNode.next;
        }
        curntNode.next = newNode;
        newNode.next = nextNode;
    }

    public void reverseList() {
        if (head == null || head.next == null) {
            System.out.println("Linked list is empty or consists of only one element");
            return;
        }
        Node prevNode = head;
        Node curntNode = head.next;
        // head.next = null;
        while (curntNode != null) {
            Node nextNode = curntNode.next;
            curntNode.next = prevNode;

            prevNode = curntNode;
            curntNode = nextNode;
        }

        head.next = null;
        head = prevNode;
    }

    public Node reverseListRecusive(Node head) {
        if (head.next == null || head == null) {
            return head;
        }
        Node newNode = reverseListRecusive(head.next);
        head.next.next = head;
        head.next = null;
        return newNode;

    }

    /**
     * Definition for singly-linked list.
     * public class Node {
     * int val;
     * Node next;
     * Node() {}
     * Node(int val) { this.data = val; }
     * Node(int val, Node next) { this.data = val; this.next = next; }
     * }
     */

    // public boolean isPalindrome(Node head) {
    //     if (head == null || head.next == null) {
    //         return true;
    //     }
    //     int size = 0;
    //     Node curntCnt = head;

    //     while (curntCnt != null) {
    //         size++;
    //         curntCnt = curntCnt.next;

    //     }

    //     // REVERSE FIRST HALF
    //     Node prev = head;
    //     Node curnt = head.next;
    //     for (int i = 1; i < size / 2; i++) {
    //         Node nextNode = curnt.next;
    //         curnt.next = prev;
    //         prev = curnt;
    //         curnt = nextNode;
    //     }
    //     head.next = null;
    //     head = prev;

    //     System.out.println(head.data);
    //     System.out.println(curnt.data);

    //     while (head.next != null || curnt.next != null) {
    //         if (head.data != curnt.data) {
    //             return false;
    //         }
    //         head = head.next;
    //         curnt = curnt.next;
    //     }
    //     return true;
    // }


    public boolean isPalindrome(Node head) {
        if(head == null || head.next == null){
            return true;
        }
        Node mid = midFinder(head);
        Node secondList = reverse(mid);    

        
        while( head != null){
            if(head.data != secondList.data){
                return false;
            }
            head = head.next;
            secondList = secondList.next;
        }
        return true;
    }

    public Node reverse(Node head){
         // REVERSE FIRST HALF
        Node prev = null;
        Node curnt = head;
        while(curnt != null){
                Node nextNode = curnt.next;
                curnt.next = prev;
                prev = curnt;
                curnt = nextNode;
        }
        head.next = null;
        head = prev;
        return head;
    }

    public Node midFinder(Node head){
        Node bunny = head;
        Node turtle = head;
        while(bunny.next != null && bunny.next.next !=null){
            turtle = turtle.next;
            bunny = bunny.next.next;
        }
        return turtle;
    }

    public static void main(String args[]) {
        System.out.println("Hello world!");
        LL list = new LL();
        // list.addFirst("is");
        // list.addFirst("This");
        // list.addLast("a");
        // list.addLast("List");
        // list.addMiddle(2, "actually");
        // list.printList();

        // list.reverseList();
        // list.printList();

        // list.head = list.reverseListRecusive(list.head);
        // list.printList();
        list.addLast("1");
        list.addLast("2");
        list.addLast("3");
        list.addLast("3");
        list.addLast("2");
        list.addLast("0");
        System.out.println(list.isPalindrome(list.head));
    }
}

// <script src="https://unpkg.com/@zxing/browser@latest/dist/d3.min.js" />