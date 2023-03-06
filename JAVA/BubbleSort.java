// Time Complexity O(n^2)
// Defnition :- Largest elements get bubbled up at the end of the array.
// Logic :- Compare two adjacent elements and replace them into their correct position.
// Algo :- 
//     Step1 - Run loop for N -1 times.
//     Step2 - Run inner loop for N- no of times the Outer loop - 1 times.
//           - Because larger elements already got placed int their respective position in last iteration.  
//     Step3 - Check if next adjacent elements is greater than current.
//     Step4 - Swap them if they are in wrong position
public class BubbleSort {

    public static void main(String args[]) {
        int arr[] = {23,43,1,34,5,6};
        for(int i = 0; i < arr.length - 1;i++){
            for (int j = 0; j < arr.length - i - 1; j++) {
                if(arr[j]>arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j +1];
                    arr[j+1]=temp;
                }
            }
        }
        for (int i = 0; i < arr.length; i++) {            
            System.out.println(arr[i]);
        }
    }
    
}
    