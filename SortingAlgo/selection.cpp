#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    x=x+y;
    y=x-y;
    x=x-y;
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if(arr[j] < arr[i]) {
                swap(arr[j], arr[i]);
            }
        }
        
    }
}

int main() {

    int arr[5] = {2, 2, 5, 1, 0};
    int size = 5;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    

    selectionSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}