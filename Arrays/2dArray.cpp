#include<iostream>
using namespace std; 

main( ) 
{ 
    int arr[10][10];

    int row, col;

    cout << "Enter Row" << endl;
    cin >> row;
   
    cout << "Enter Column" << endl;
    cin >> col;

    cout << "Enter Array Value" << endl;
    for(int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "arr";
        }
    }

    cout << "Entered Row is " << row << endl;
}