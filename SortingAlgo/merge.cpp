#include <iostream>

using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    i = l;
    j = m+1;
    k = l;

    int temp[5];

    while(i<=m && j<=r) {
        if(arr[i] < arr[j]) {
            temp[k] = arr[i];
            i++;
            k++;
        } else {
            temp[k] = arr[j];
            j++;
            k++;
        }
    }

    while(i<=m) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j<=r) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for (int p = 0; p <= r; p++)
    {
        arr[p] = temp[p];
    }
    
}

void mergeSort(int arr[], int l, int r) {
    if(l<r) {

        // mid index
        int m = (l+r)/2;

        // Go to left subarray
        mergeSort(arr, l, m);

        // Go to right subarray
        mergeSort(arr, m+1, r);

        //merge array
        merge(arr, l, m, r);
    }

}

int main() {

    int arr[5] = {9, 7, 3, 6, 2};
    int size = 5;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    } cout << endl;
    

    mergeSort(arr, 0, 4);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}