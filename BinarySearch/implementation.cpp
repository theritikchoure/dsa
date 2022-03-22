#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while(start <= end) {
        if(arr[mid] == key) {
            return mid;
        }

        //go to right part
        if(key > arr[mid]) {
            start = mid + 1;
        } else { // go to left part
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return -1;

}

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int brr[9] = {18, 19, 20, 21, 22, 23, 24, 25, 26};

    cout << "Index of 7 is " << binarySearch(arr, 10, 7) << endl;
    cout << "Index of 24 is " << binarySearch(brr, 9, 18) << endl;

    return 0;
}