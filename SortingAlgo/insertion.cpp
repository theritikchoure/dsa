#include <iostream>

using namespace std;

void insertionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int value = arr[i];
        int j = i;

        while(j > 0 && arr[j-1] > value) {
            arr[j] = arr[j-1];
            j = j-1;
        }

        arr[j] = value;
    }
}

int main() {

    int arr[5] = {2, 2, 5, 1, 0};
    int size = 5;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    

    insertionSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}