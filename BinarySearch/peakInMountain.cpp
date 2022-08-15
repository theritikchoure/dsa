#include<iostream>
using namespace std;

// Status: solved

// Ques Source: LeetCode

// Ques : Let's call an array arr a mountain if the following properties hold:
// arr.length >= 3
// There exists some i with 0 < i < arr.length - 1 such that:
// arr[0] < arr[1] < ... arr[i-1] < arr[i]
// arr[i] > arr[i+1] > ... > arr[arr.length - 1]
// Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

/* Example 1 
    Input: arr = [0 1 0]
    Output: 1
*/

/* Example 2 
    Input: arr = [0 2 1 0]
    Output: 1
*/

/* Example 2 
    Input: arr = [0 10 5 2]
    Output: 1
*/

int peakInMountain(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;

}

int main() {

    int arr[5] = {0, 1, 10, 5, 2};

    cout << "Index of Peak Element is " << peakInMountain(arr, 5) << endl;

    return 0;
}