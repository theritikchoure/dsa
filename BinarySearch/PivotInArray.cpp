#include<iostream>
using namespace std;

// Find Index of Pivot (minimum) element in sorted and rotated array

int findPivot(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start < end) {
        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return start;
}

int main() {

    int arr[10] = {8, 9, 10, 1, 2, 3, 4, 5, 6, 7};
    int brr[9] = {23, 24, 25, 26, 18, 19, 20, 21, 22};

    cout << "Index of Pivot is " << findPivot(arr, 10) << endl;
    cout << "Index of Pivot is " << findPivot(brr, 9) << endl;

    return 0;
}