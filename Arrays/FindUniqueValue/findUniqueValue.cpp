#include<iostream>
using namespace std;

// Ques Source: CodeStudio

/* Question 
    You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
    Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
    You need to find and return that number which is unique in the array/list.
*/

/* Example 1 
    Input : 2 3 1 6 3 6 2
    Output : 1
*/

/* Example 2
    Input : 2 4 7 2 7
    Output : 4
*/

// Without Swap Function (with XOR)
int findUniqueValue(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans^arr[i];
    }

    return ans;
}

int main() {

    int arr[11] = {1, 2, 1, 4, 2, 3, 5, 5, 3, 10, 10};
    int brr[9] = {56, 9, 56, 24, 34, 9, 74, 74, 24};

    cout << "Unique Value" << findUniqueValue(arr, 11) << endl;
    cout << "Unique Value" << findUniqueValue(brr, 9) << endl;

    return 0;
}