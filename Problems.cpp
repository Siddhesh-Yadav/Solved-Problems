#include<iostream>
using namespace std;

// Problem no 0 :- Print hello world!
// int main(){
//     cout << "Hello World!\n";
//     return 0;
// }


int main(){
    int rows, columns;
    cout<<"Enter number of Rows\n";
    cin>>rows;
    cout<<"Enter number of Columns\n";
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
int a = 1;
for(int i = 1; i <= rows; i++){
    for(int j = 1; j <= i; j++){
        cout<< a <<" ";
        a == 0?a = 1: a = 0;
    }
    cout<<endl;
}

    return 0;
}



