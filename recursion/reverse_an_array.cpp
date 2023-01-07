#include<iostream>

using namespace std;

// Using one variable
void reverseArrayUsingOneVariable(int arr[], int i, int n) {
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverseArrayUsingOneVariable(arr, i+1, n);
}

// Using two variables
void reverseArrayUsingTwoVariable(int arr[], int n, int l, int r) {
    if(l >= r) return;
    swap(arr[l], arr[r]);
    reverseArrayUsingTwoVariable(arr, n, l+1, r-1);
}


int main() {

    // Reverse an array using one variable in recursion
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int m = 6;
    
    reverseArrayUsingOneVariable(arr1, 0, m);
    for (int i = 0; i < m; i++)
    {
        cout << arr1[i] << " ";
    }

    // ----------------------------------------------------------------------
    cout << endl;
    // ----------------------------------------------------------------------

    // Reverse an array usign two variables in recursion
    int arr2[6] = {11, 12, 13, 14, 15, 16};
    int n = 6;

    reverseArrayUsingTwoVariable(arr2, n, 0, n-1);
    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }
    
    return 0;
}