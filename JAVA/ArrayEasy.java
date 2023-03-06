public class ArrayEasy {
    public static void main(String args[]){
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
        int arr1[]={1,2,3,4,5,6};
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

// class Solution {
//     public boolean containsDuplicate(int[] nums) {
//         boolean t = false;
//         for(int i =0;i < nums.length - 1;i++){
//             for(int j = i +1;j <nums.length;j++){
//                 if(nums[i] == nums[j]){
//                     t =  true;
//                     break;
//                 };
//             }
//         }
//         return t;
//     }
// }
