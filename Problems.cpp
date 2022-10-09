#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

// Problem no 0 :- Print hello world!
// int main(){
//     cout << "Hello World!\n";
//     return 0;
// }

// Problem no 29 Function.
int fact(int n){
    int factorial = 1;
    for(int i = 2; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}


int main()
{
    // int rows, columns;
    // cout << "Enter number of Rows\n";
    // cin >> rows;
    // cout << "Enter number of Columns\n";
    // cin>>columns;
    int n;
    cin>>n;

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
    return 0; 
}
