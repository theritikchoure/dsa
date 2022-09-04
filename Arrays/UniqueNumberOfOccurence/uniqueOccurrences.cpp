#include<iostream>
using namespace std;

// Status: Unsolved

// Ques Source: Leet Code

// Ques : Given an array of integers arr, return true if the number of occurrences of each 
// value in the array is unique, or false otherwise.

/* Example 1 
    Input: arr = [1,2,2,1,1,3]
    Output: true
    Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the 
                 same number of occurrences.
*/

/* Example 2 
    Input: arr = [1,2]
    Output: false
*/

/* Example 3
    Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
    Output: true
*/

// Unique Occurrences
bool uniqueOccurrences(int arr[], int size) {
    int ans = 0;
    for(int i = 0; i < size; i++) {
        ans = ans^arr[i];
    }

    return ans;
}

int main() {

    int arr[11] = {1, 2, 1, 4, 2, 3, 5, 5, 3, 10, 10};
    int brr[9] = {56, 9, 56, 24, 34, 9, 74, 74, 24};

    cout << "Unique Value" << uniqueOccurrences(arr, 11) << endl;
    cout << "Unique Value" << uniqueOccurrences(brr, 9) << endl;

    return 0;
}