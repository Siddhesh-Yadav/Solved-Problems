#include <iostream>
using namespace std;

// Problem no 0 :- Print hello world!
// int main(){
//     cout << "Hello World!\n";
//     return 0;
// }

int main()
{
    // int rows, columns;
    // cout << "Enter number of Rows\n";
    // cin >> rows;
    // cout << "Enter number of Columns\n";
    // cin>>columns;

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
    // int r;
    // cout<<"enter r";
    // cin >> r;
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
    // int n;
    // cout<<"enter number of rows you want to print";
    // cin>>n;
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
    // int rows;
    // cin>>rows;
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
    // int rows;
    // cin>>rows;
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
    // int n;
    // cin>>n;
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
    // int n;
    // cin>>n;
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
// int n; 
// cin>>n;
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
// int n; 
// cin>>n;
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
// int n; 
// cin>>n;
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
// int n; 
// cin>>n;
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
// int n;
// cin>>n;
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
    return 0;
}
