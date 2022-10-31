#include <iostream>
#include <cmath>
#include <climits>
#include <math.h>
using namespace std;

// Problem no 0 :- Print hello world!
// int main(){
//     cout << "Hello World!\n";
//     return 0;
// }

// Problem no 29 Function.
// int fact(int n){
//     int factorial = 1;
//     for(int i = 2; i <= n; i++){
//         factorial *= i;
//     }
//     return factorial;
// }


int main(){
    // int rows, columns;
    // cout << "Enter number of Rows\n";
    // cin >> rows;
    // cout << "Enter number of Columns\n";
    // cin>>columns;
    // int n;
    // cin>>n;

    // Problem no 1 :- Print a solid rectangle.
    // for (int i = 1; i <= rows; i++){
    //     for (int j = 1; j <= columns; j++){
    //         cout<<"*";
    //     }
    //     cout<< endl;
    // }


    // Problem no 2 :- Print a hollow rectangle
    //     for (int i = 1; i <= rows; i++){
    //         for (int j = 1; j <= columns; j++){
    //             if(i==1 || i == rows || j==1 || j== columns){
    //                 cout<<"*";
    //             }else{
    //                 cout<<" ";
    //             }
    //         }
    //         cout<< endl;
    //     }


    // Problem no 3 :- Print a half pyramid
    //     for(int i = 1; i<=rows;i++){
    //         for(int j = 1; j <= i; j++){
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }


    // Problem no 4 :- Print a inverted half pyramid
    // for(int i = rows; i >= 1; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // Problem no 5 :- Print a half pyramid 180 digree.
    // for(int i = 1; i <= rows; i++){
    //     for (int j = 1; j <= rows; j++){
    //         if(j<= rows-i){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Problem no 6 :- Print a half pyramid using numbers.
    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1 ; j <= i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // Problem no 7 :- Print a inverted half pyramid using numbers.
    // for(int i = rows; i >= 1; i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }


    // Problem no 8 :- Print half pyramid using numbers - 2.
    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }


    // Problem no 9 :- Print inverted half pyramid using numbers.
    // (numbers should be order of row)
    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= rows - i + 1; j++){
    //         cout<<i;
    //     }
    //     cout<< endl;
    // }


    // Problem no 10 :- Print floyd's Triangle.
    // int a = 1;
    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout << a <<" ";
    //         a++;
    //     }
    //     cout<<endl;
    // }


    // Problem no 11 :- Print 0-1 triangle.
    // HINT:If sum of the orders of row and column is even return should be 0.
    // for(int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= i; j++){
    //         if((i + j) % 2 == 0){
    //             cout<<"1"<<" ";
    //         }else{
    //             cout<<"0"<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Problem no 12 :- 5 Palindromic pattern.
    // for (int i = 1; i <= r; i++){

    //     for(int k = 1; k <= r - i; k++){
    //         cout<<"  ";
    //     }
    //     for(int j = i; j >= 1; j--){
    //         cout<<j<<" ";
    //     }
    //     for(int l = 2; l <= i; l++){
    //         if(i >= 2){
    //             cout<<l<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Problem no 13 :- Print Diamond using stars with 2n rows;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k <= (2 * i) - 1; k++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i = n - 1; i >= 1; i--){
    //     for(int j = 1; j <= n - i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k <= (2 * i) - 1; k++ ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // Problem no 14 :- Print a hollow diamond.
    // for (int i = 1; i <= rows; i++){
    //     for(int j = 1; j <= rows - i; j++){
    //         cout<<"  ";
    //     }
    //     for(int k = 1; k <= (2 * i) - 1;k++){
    //         if(k == 1 || k == (2 * i)-1){
    //             cout<<"*"<<" ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i = rows - 1; i >= 1; i--){
    //     for(int j = 1; j <= rows - i; j++){
    //         cout<<"  ";
    //     }
    //     for(int k = 1; k <= (2 * i) - 1;k++){
    //         if(k == 1 || k == (2 * i)-1){
    //             cout<<"*"<<" ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;        
    // }


    // Problem no 15 :- Print a hollow diamond inscribed in a rectanlge.
    // int k = -1;
    // for(int i = 1; i <= rows; i++){
    //     for (int j = 1; j <=(rows * 2) - 1; j++){
    //         if(i == 1){
    //             cout<<"*";
    //         }else if((rows - k) <= j && j <= (rows + k)){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     k++;
    //     cout<<endl;
    // }
    // k = rows - 3;
    // for(int i = rows -1 ; i >= 1; i--){
    //     for (int j = 1; j <=(rows * 2) - 1; j++){
    //         if(i == 1){
    //             cout<<"*";
    //         }else if((rows - k) <= j && j <= (rows + k)){
    //             cout<<" ";
    //         }else{
    //             cout<<"*";
    //         }
    //     }
    //     k--;
    //     cout<<endl;
    // }


    // Problem no 16 :- rhombus
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1; j <= n; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // Problem no 17 :- Hollow Rhombus
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout<<"  ";
    //     }
    //     for(int j = 1; j <= n; j++){
    //         if(i == 1 || i == n){
    //             cout<<"* ";
    //         }else{
    //             if(j == 1 || j == n){
    //                 cout<<"* ";
    //             }else{
    //                 cout<<"  ";
    //             }
    //         }
    //     }
    //     cout<<endl;
    // }


    // Problem no 18:- Pyramid pattern for numbers .
    // for(int i = 1; i <= n;i++){
    //     for(int j = 1; j <= n - i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k <= i; k++){
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }



    // Problem no 19:- Pyramid pattern for numbers No -2.
    // for(int i = 1; i <= n;i++){
    //     int l = 1;
    //     for(int j = 1; j <= n - i; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 1; k <= i; k++){
    //         cout<<l<<" ";
    //         l++;
    //     }
    //     cout<<endl;
    // }


    // Problem no 20:- Butterfly.
    // for(int i = 1; i <= n;i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<"* ";
    //     }
    //     for(int k = 1; k <= 2 * n - 2 * i; k++){
    //         cout<<"  ";
    //     }
    //     for(int l = 1; l <= i; l++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int i = n; i >= 1;i--){
    //     for(int j = 1; j <= i; j++){
    //         cout<<"* ";
    //     }
    //     for(int k = 1; k <= 2 * n - 2 * i; k++){
    //         cout<<"  ";
    //     }
    //     for(int l = 1; l <= i; l++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }


    // Problem no 21:- Hollow Butterfly.
    // for(int i = 1; i <= n;i++){
    //     for(int j = 1; j <= i; j++){
    //         if(j == 1 || j == i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     for(int k = 1; k <= 2 * n - 2 * i; k++){
    //         cout<<"  ";
    //     }
    //     for(int l = 1; l <= i; l++){
    //         if(l == 1 || l == i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int i = n; i >= 1;i--){
    //     for(int j = 1; j <= i; j++){
    //         if(j == 1 || j == i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     for(int k = 1; k <= 2 * n - 2 * i; k++){
    //         cout<<"  ";
    //     }
    //     for(int l = 1; l <= i; l++){
    //         if(l == 1 || l == i){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Problem no 22 :- Zig Zag pattern.
    // for(int i = 1; i <= 3; i++){
    //     for (int j = 1; j <= n;j++){
    //         if((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)){
    //             cout<<"* ";
    //         }else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Problem no 23 :- Check whether the number is prime or not.
    // int flag = 0;
    // for(int i = 2; i <= sqrt(n); i++){
    //     if(n % i == 0){
    //         cout<<"Not prime";
    //         flag = 1;
    //     }
    // }
    // if(flag == 0){
    //     cout<<"Prime";
    // }

    // Problem no 24 :- Print all the digits of a number from right to left.
    // while (n > 0){
        // Remainder that remains after dividing any number from 10 is the last digit.
        // int rem = n % 10;
        // cout<<rem<<"\n";
        // Here int dosent support numbers after decimal so numbers after point are getting deleted.
    //     n = n / 10;
    // }
    

    // Problem no 25 :- Reverse a number.
    // int reversed = 0;
    // while(n > 0){
    //     int lastDigit = n % 10;
    //     reversed = reversed * 10 + lastDigit;
    //     n = n / 10;
    // }
    // cout<<reversed;
    // n = 1234; 
    // lastDigit = 0;
    // lastDigit = (10 * 0) + 4;
    // lastDigit = (10 * 4) + 3;
    // lastDigit = (10 * 43) + 2;
    // lastDigit = (10 * 432) + 1;
    // lastDigit = 4321;


    // Problem no 26 :- Check the whether the given number is Armstrong number or not.
    // int sum = 0;
    // int original = n;
    // while(n>0){
    //     int lastDigit = n % 10;
    //     // sum += pow(lastDigit,3);
    //     sum += lastDigit * lastDigit * lastDigit;
    //     n = n/10;
    // }
    // if(sum == original){
    //     cout<<"Armstrong Number";
    // }else{
    //     cout<<"Not an Armstrong NumberlastDigit";
    // }

    // Problem no 27 :- Print all the prime numbers between given numbers.
    // int a,b;
    // cin>>a>>b;
    // for(int i = a; i <= b; i++){
    //     int isPrime = 1;
    //     for(int j = 2; j <= sqrt(i); j++){
    //         if(i%j ==0){
    //             isPrime = 0;
    //         }
    //     }
    //     if(isPrime == 1){
    //         cout<<i<<endl;
    //     }
    // }

    // Problem no 28 :- Fibbonacci Sequence.
    // int t1 = 0;
    // int t2 = 1;
    // int nextTerm;
    // cout<<t1<<endl<<t2<<endl;
    // for(int i = 1;i<= n; i++){
    //     nextTerm = t1 + t2;
    //     cout<<nextTerm<<endl;
    //     t1 = t2;
    //     t2 = nextTerm;
    // }
    

    // Problem no 29 :- Pascals triangle.
    // Hint: every number is in nCr(iCj) pattern where formula is n!/(n-r)!*r!.
    // for(int i = 0; i < n; i++){
    //     for(int k = 1; k <= n - i;k++){
    //         cout<<" ";
    //     }
    //     for(int j = 0; j <= i; j++){
    //         cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
    //     }
    //     cout<<endl;
    // }


    //                                          ## Arrays ##
    // Problem no 30 :- Print the sum of all the elements of all possible subArrays.
    // int arr2[5]={1,2,0,7,5};
    // int sum = 0;
    // for(int i = 0; i < 5; i++){
    //     for(int j = i; j < 5;j++){
    //         sum += arr2[j];
    //     }
    // }    
    // cout<<sum;


    // Problem no 31 [KickStart]:- An arithmetic array is an array that contains at least two integers and the differences
    // between consecutive integers are equal.For example, [9, 10], [3, 3, 3], and [9,7, 5,3]are arithmetic arrays, 
    // while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4]are not arithmetic arrays.
    //     Sarasvati has an array of N non-negative integers. The i-th integer of the array is A. She wants to choose
    // a contiguous arithmeticsubarray from her array that has the maximum length Please help her to determine the
    // length of the longest contiguous arithmetic subarray.

    // int n;
    // cin>>n;
    // int a[n];
    // for (int i = 0; i < n; i++){
    //     cin>>a[i];
    // };
    
    // int ans = 2;
    // int pd = a[1]-a[0];
    // int j =2;
    // int current = 2;
    // while (j<n){
    //     if(pd == a[j]-a[j-1]){
    //         current++;
    //     }else{
    //         pd = a[j]-a[j-1];
    //         current = 2;
    //     }
    //         ans = max(current,ans);
    //     j++;
    // }
    // cout<<ans<<endl;


    // Problem no 32 : - Isyana is given the number of visitors at her local theme park on N consecutive days.The number of visitors on the i-th day is V₁.A day is record breaking if it satisfies both of the following conditions: The number of visitors on the day is strictly larger than the number of visitors on each of the previous days. Either it is the last day, or the number of visitors on the day is strictly larger than the number of visitors on the following day. Note that the very first day could be a record breaking day! Please help Isyana find out the number of record breaking days.

    // int n;
    // cin>>n;
    // int a[n+1];
    // a[n]= -1; // to satisfy the last day test case number of visitors cant be negative.
    // for(int i =0; i < n; i++){
    //     cin>>a[i];
    // }
    // if(n ==1){
    //     cout<<"1"<<endl;
    //     return 0;
    // }

    // int ans = 0;
    // int mx = -1;

    // for(int i = 0; i < n; i++){
    //     if(a[i]>mx && a[i]> a[i+1]){
    //         ans++;
    //     }
    //     mx = max(mx,a[i]);
    // }
    // cout<<ans<<endl;


    // Problem 33 :- Given an array arr[] of size N. The task is to find the first repeating eleme  smallest.
    // int n;
    // cin>>n;

    // int a[n];
    // for (int i = 0; i < n; i++){
    //     cin>>a[i]; 
    // }

    // for(int i = 0; i < n; i++){
    //     int j;
    //     for(j = i + 1; j < n; j++){                 // N! - n factorial times//
    //         if (a[i] == a[j]){
    //             cout<< i<<'h';
    //             break;
    //         }            
    //     }
    //     if(j != n){
    //         break;
    //     }
    // }
    
    // int n ;
    // cin >> n;
    // int a[n];
    // for(int i = 0; i < n; i++){
    //     cin>>a[i];
    // };
    // const int N = 1e6+2;

    // int arr[N];
    // for (int i = 0; i < N; i++){
    //     arr[i] = -1;
    // }

    // int minidx = INT_MAX;
    // for (int i = 0; i < n; i++){
    //     if(arr[a[i]] != -1){
    //         minidx = min(minidx , arr[a[i]]);
    //     }else{
    //         arr[a[i]] = i;
    //     }
    // }
    // if(minidx == INT_MAX){
    //     cout<<"-1"<<endl;
    // }else{
    //     cout<<minidx + 1<<endl; //+1 for 1 base indexing
    // }
    

    // Problem 34 : - You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

    // int n;
    // cin>> n;
    // int arr[n];
    // for (int i = 0; i < n; i++){
    //     cin>>arr[i];
    // };

    // const int N = 1e6 + 2;

    // bool check[N];
    // for (int i = 0; i < N; i++){
    //     check[i] = false;
    // };

    // for (int i = 0; i < n; i++){
    //     if(arr[i]>=0){
    //         check[arr[i]] = true;
    //     }
    // }
    // int ans = -1;

    // for(int i = 1; i < N; i++){
    //     if (check[i] == false){
    //         ans = i;
    //         break;
    //     }        
    // }
    // cout<<ans;
    
    
    // Problem 35 :- Maximum SubArray Sum - Find the sub array which has maximum sum.
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n ; i++){
        cin>>arr[i];
    };

    // Brute force 
    // int max_sum = INT_MIN;
    // for (int i = 0; i < n; i++){
    //     for (int j = i; j < n; j++){
    //         int sum = 0;
    //         for (int k = i; k <= j; k++){
    //             // cout<<arr[k]<<" ";    
    //             sum += arr[k];            
    //         }            
    //         // cout<<endl;
    //         max_sum = max(max_sum, sum);
    //     }
    // }
    // cout<< max_sum;
        
    

    

    return 0; 
}
