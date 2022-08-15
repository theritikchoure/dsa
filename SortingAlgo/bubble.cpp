#include <iostream>

using namespace std;

void swap(int &x, int &y) {
    x=x+y;
    y=x-y;
    x=x-y;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size; i++)
    {
        int flag = false;
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
                flag = true;
            }
        }
        
        if(!flag) break;
    }
}

int main() {

    int arr[5] = {7, 8, 5, 1, 2};
    int size = 5;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}