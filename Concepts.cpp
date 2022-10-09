#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main(){
    int arr[8]={23,4,5,34,6,56,45,89};
    int n;
    cin>>n;
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
    int counter = 1;
    int len = 8;//array length
    while(counter < len){
        for(int i = 0; i < len - counter;i++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i = 0; i < 8; i++){
        cout<<arr[i]<<", ";
    }

    
    return 0;
}