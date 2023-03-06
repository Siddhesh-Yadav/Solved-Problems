// Time Complexity O(n^2)
// Defnition :- Smallest element gets selectedd and placed int its postion.
// Logic :- Assume that telwment at current iteration indes is smalles compare it with rest of the elems ,
//          find the smallest replace it with cucrrent iteration index.
// Algo :- 
//     Step1 - Run loop for N -1 times.(All the smallest elments got placed, Largest one remains at the end)
//     Step2 - Find the smallest element from current idx + 1 beacause smallest got placed in previous iteration  
//     Step3 - Swap the smallest element with element at idx
public class SelectionSort {
    public static void main(String args[]) {
        int arr[]={23,5,7,3,44,35,4,98,1};
        for(int i = 0; i < arr.length - 1; i++){
            int id = i;
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[j]<arr[id]) {
                    id = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[id];
            arr[id] = temp;
        }
        for(int i = 0; i < arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}
