import java.util.Scanner;

public class Fibonacchi {
    public static void fibbLoop(int n){//Using for loop
        int a =0;
        int b = 1;
        System.out.print(a);
        System.out.print(" ");
        System.out.print(b);
        System.out.print(" ");
        for(int i = 0; i < n;i++){
            int current = a + b;
            a = b;
            b = current;
            System.out.print(current);
            System.out.print(" ");
        }
    }
    public static void fibbRecursion(int a, int b,int n){
        if (n == 0) {
            return;
        }
        int c = a + b;
        System.out.println(c);
        a = b;
        b = c;
        fibbRecursion(a, b, n - 1);

    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        // int n = sc.nextInt();
        int n =10;
        // fibbLoop(n);
        int a =0;
        System.out.println(a);
        int b = 1;
        System.out.println(b);
        fibbRecursion(a,b,n -2);
    }
}
