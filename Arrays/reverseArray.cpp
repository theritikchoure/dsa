#include<iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int array[], int size) {
    cout << "Printing Array" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "Printing Completed" << endl;
}

int main() {

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int brr[9] = {5, 9, 56, 24, 34, 67, 74, 96, 24};

    reverse(arr, 10);
    reverse(brr, 9);

    printArray(arr, 10);
    printArray(brr, 9);

    return 0;
}