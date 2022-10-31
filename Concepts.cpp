#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    int arr[8]={23,4,5,34,6,56,45,89};
    // int n;
    // cin>>n;
    //                                      ## Linear Search: ## O(n)
    //  searching over the every index of an array; 
    // for (int i = 0; i < 8; i++){
    //     if(arr[i]==n){
    //         cout<<i;
    //     }
    // }


    //                                       ## Binary Search ##  O(log(n))
    // Rule no 1 - Array must be sorted.
    // Find midpoint and then check whether the midpoint is greater or less than the desired number. second again repeat same for the half part in which our desired number is located. keep doing this until you find the number.
    // int arr2[8]={2,4,5,7,9,23,45,56};
    // int s = 0;//starting point
    // int e = 8;//Ending point i.e. length of the array
    // while(s<= e){
    //     int mid = (s+e)/2;//midpoint
    //     if(arr2[mid]==n){
    //         cout<<mid;
    //         break;
    //     }else if(arr2[mid]>n){
    //         e = mid-1;//number is present in first half
    //     }else{
    //         s = mid+1;//number is present in second half
    //     }
    // }



    //                                      ## SELCTION SORT ##
    // Find the minimum number in the array and swap it with the element at the begining.
    // do the same for the reamaing part 

    // Sorted :
    // 4  23 5 34 6 56 45 89
    // 4 5  23 34 6 56 45 89
    // 4 5 6  34 23 56 45 89
    // 4 5 6 23  34 56 45 89
    // 4 5 6 23 34  56 45 89
    // 4 5 6 23 34 45  56 89
    // 4 5 6 23 34 45 56 89

    // for(int i = 0; i < 8 - 1; i++){//here length of an array is 8
    //     for(int j = i + 1; j < 8; j++){
    //         if(arr[j]<arr[i]){
    //             int temp = arr[j];
    //             arr[j]= arr[i];
    //             arr[i]=temp;
    //         }
    //     }
    // }
    // for(int i = 0; i < 8; i++){
    //     cout<<arr[i]<<", ";
    // }


    //                                    ## BUBBLE SORT ##
    // Repeatedly swap two adjacent elements if they are in wrong order.
    // Our last element gets in its position in the first iteration so we only need to run the loop n - 1 next time.
    // int counter = 1;
    // int len = 8;//array length
    // while(counter < len){
    //     for(int i = 0; i < len - counter;i++){
    //         if(arr[i]> arr[i+1]){
    //             int temp = arr[i];
    //             arr[i]= arr[i+1];
    //             arr[i+1] = temp;
    //         }
    //     }
    //     counter++;
    // }
    // for(int i = 0; i < 8; i++){
    //     cout<<arr[i]<<", ";
    // }


    //                                     ## Insertion Sort ##
    // Insert the element at its correct position. Meaning all the elements after that element should be greater than the element.
    // Assume that the element at the position 0 is at its correct postion.
    // int len = 8;//array  length
    // for(int i = 1; i < len; i++){
    //     int current = arr[i];
    //     int j = i -1;
    //     while(arr[j]> current && j >=0){
    //         arr[j+1]=arr[j];
    //         j--;
    //     }
    //     arr[j+1]= current;
    //     for(int k =0; k < len; k++){
    //         cout<<arr[k]<<" ";
    //     }
    //     cout<<endl;
    // }



    // SubArrays :- Continuous part of an array are called as SubArrays. Single elements are also subArray.
    // Number of posible SubArrays are given by. nC2 + n. Where nC2 is possible combinations n for the total no of element and 2 for continuous part + n becase single element can also be a SubArray.
    // int example[5]={1,2,3,4,5};
    // subarray1 = {1};
    // subarray2 = {2,3};
    // subarray3 = { 3,4,5};
    // WrongSubArray = {1,3,5}; XXX

    // SubSequence :- SubSequence can be derived from an array by selecting zero or more elements. Elements can be at any position in that array but their order must remain same.
    //Every SubArray is a SubSequence but not every SubSequence is a SubArray.
    // Number of possible SubSequence are given by 2 raise to n

    // Example = {1,2,3,4,5};
    // subSeq1= {};
    // subSeq2 = {1,3,5};
    // subSeq3 = {1,2,3,5};
    // WrongSubSeq ={5,3,4}
    

    
    return 0;
}