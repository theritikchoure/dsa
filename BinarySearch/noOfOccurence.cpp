#include<iostream>
using namespace std;

// Status: Solved

// Ques Source: Code Studio

// Ques : You have been given a sorted array/list ARR consisting of ‘N’ elements. 
// You are also given an integer ‘K’.
// Now, your task is to find the first and last occurrence of ‘K’ in ARR.

/* Example 1 
    Input: arr = [0 5 5 6 6 6] , k = 3
    Output: -1 -1
*/

/* Example 2 
    Input: arr = [0 0 1 1 2 2 2 2], k = 2
    Output: 4 7
*/

// First Occurence of a Number at index
int firstOccurence(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else { // go to left part
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

// Last Occurence of a Number at index
int lastOccurence(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;

    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if(key > arr[mid]) {
            start = mid + 1;
        } else { // go to left part
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

int noOfOccurence(int arr[], int n, int key) {
    int firstOccur = firstOccurence(arr, n, key);
    int lastOccur = lastOccurence(arr, n, key);

    int noOfOccurence = ( lastOccur - firstOccur ) + 1;
    return noOfOccurence;
}

int main() {

    int arr[6] = {0, 5, 5, 6, 6, 8};
    int brr[8] = {0, 0, 1, 2, 2, 2, 2, 2};

    cout << "No of Occurence of 6 is" << noOfOccurence(arr, 6, 6) << endl;
    cout << "No of Occurence of 2 is" << noOfOccurence(brr, 8, 2) << endl;

    return 0;
}