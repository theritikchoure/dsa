#include<iostream>
using namespace std;

// Status: Solved

// with Swap Function
void swapWithSwapFunction(int arr[], int size) {
    for(int i = 0; i < size; i = i+2) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

// Without Swap Function
void swapWithoutSwapFunction(int arr[], int size) {
    for(int i = 0; i < size; i = i+2) {
        if(i+1 < size) {
            int temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
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

    swapWithSwapFunction(arr, 10);
    swapWithSwapFunction(brr, 9);

    printArray(arr, 10);
    printArray(brr, 9);

    swapWithoutSwapFunction(arr, 10);
    swapWithoutSwapFunction(brr, 9);

    printArray(arr, 10);
    printArray(brr, 9);

    return 0;
}