// Euclids algorithm
import java.util.Scanner;

class GCD {
    public static int gcd(int a, int b){
        while(a > 0){
            if(b > a){
                int t =a;
                a = b;
                b = t;
            }
            a = a- b;
        }
        return b;
    }
    public static void main (String args[]){
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int n = sc.nextInt();
        System.out.println(gcd(m,n));
    }
}