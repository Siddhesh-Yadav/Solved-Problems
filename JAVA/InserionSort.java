// Time Complexity O(n^2)
// Defnition :- place first element of unsorted arr to its right position in the sorted arr.
// Logic :- devide the arr in sorted and unsorted parts and then compare the first element with unsorted
//          part in the descending order and place it in its correct position.
// Algo :- 
//     Step1 - Run loop for N -1 times.(All the smallest elments got placed, Largest one remains at the end)
//     Step2 - Find the smallest element from current idx + 1 beacause smallest got placed in previous iteration  
//     Step3 - Swap the smallest element with element at idx
public class InserionSort {
    public static void main(String args[]) {
        int arr[]={23,5,7,3,44,35,4,98,1};
        for(int i = 1; i < arr.length -1; i++){ // Runs through unsorted array. i.e remaining
            int current = arr[i];
            int j = i -1; // Stores the index of last element of sorted part of the array.
            while(j >=0 && current < arr[j] ){// Runs through sorted array backwards.
                arr[j + 1] = arr[j];//element at position was greater than current so It got placed
                // one place ahead leaving empty space which will be filled with either element at previous
                //position or our current which we saved in current before the while loop.
                j--;
            };
            arr[j+1] = current;
        }
        for(int i = 0; i < arr.length;i++){
            System.out.println(arr[i]);
        }
    }
    
}



