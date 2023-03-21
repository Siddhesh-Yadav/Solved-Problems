// import java.util.*;
import java.util.*;
public class ArrayEasy {
    public static int arr1[]={1,2,3,3,4,5,6};
    public int arr2 [] = {12, 4, 7, 9, 2, 23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50};
         
    boolean containsDuplicate(){
        for (int i = 0; i < arr1.length -1; i++) {
            if(arr1[i]==arr1[i+1]){
                return true;
            }
        }
        return false;

    }
    public static void main(String args[]){
        ArrayEasy arrEasy = new ArrayEasy();
        // Q no 1 DSA APNA COLLEGE 
        //Return maximum of two numbers
        int arr[] = {23,33,4,5,12,98};
        int min = Integer.MAX_VALUE;
        int max = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            min = Math.min(min, arr[i]);
            max = Math.max(max, arr[i]);
        }
        // System.out.println(min);
        // System.out.println(max);

        
        
        //Q no 2 DSA APNA COLLEGE
        //Reverse an array
        for (int i = 0; i < (arr1.length/2); i++) {
            int temp = arr1[i];
            arr1[i] = arr1[arr1.length - 1 -i];
            arr1[arr1.length -1 -i] = temp;
        }
        for (int i = 0; i < arr1.length; i++) {            
            // System.out.println(arr1[i]);
        }

        // Q no 3 DSA APNA COLLEGE 
        // Maximum Sub array Kadane's algo
        // kadane();

        //Q no 4 DSA APNA COLLEGE{
        //Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
        //System.out.println(containsDuplicate(arr));



        // Q no 5 DSA APNA COLLEGE
        // Given an array of N integers where each value represents the number of chocolates in a packet. Each packet can have a variable number of chocolates. There are m students, the task is to distribute chocolate packets such that: 
        // Each student gets one packet.
        // The difference between the number of chocolates in the packet with maximum chocolates and the packet with minimum chocolates given to the students is minimum.
        
        int arr3[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30, 40, 28, 42, 30, 44, 48, 43, 50 };

        int m = 7; // Number of students

        int n = arr3.length;
        System.out.println("Minimum difference is " + findMinDiff(arr3, n, m));
    }
    static int findMinDiff(int arr[], int n, int m){
        if (m == 0 || n == 0) {
            return 0;
        }
        Arrays.sort(arr);

        if(m > n){
            System.out.println(n);
            return -1;
        }
        int minDiff = Integer.MAX_VALUE;
        for(int i = 0;i+ m -1 < n;i++){
            int diff = arr[i + m -1] - arr[i];
            if(diff < minDiff){
                minDiff = diff;
            }
        }
        return minDiff;
    }
    

    public static int kadane(){
        int arr[]={-2,1,-3,4,-1,2,1,-5,4};

        int maxSum = Integer.MIN_VALUE;
        int curntSum =0;
        int maxNegativeElem = Integer.MIN_VALUE;
        for(int i =0; i < arr.length;i++){
            curntSum += arr[i];
            if(curntSum < 0){
                curntSum =0;
            }
            maxNegativeElem = Math.max(maxNegativeElem , arr[i]);
            maxSum = Math.max(curntSum, maxSum);
        }
        maxSum = maxSum == 0?maxNegativeElem:maxSum;
        return maxSum;
    }
}


