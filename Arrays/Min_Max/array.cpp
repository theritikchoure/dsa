#include<iostream>
using namespace std;

int getMinValue(int num[], int n) {
    int min = INT_MAX;

    for (int i = 0; i < n; i++) {
        if(num[i] < min) {
            min = num[i];
        }
    }

    return min;
}

int getMaxValue(int num[], int n) {
    int max = INT_MIN;

    for (int i = 0; i < n; i++) {
        if(num[i] > max) {
            max = num[i];
        }
    }

    return max;
}

int main() {

    int size;
    cin>>size;

   int arr[100];

    //Taking Input
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Maximum Value is " << getMaxValue(arr, size) << endl;
    cout << "Minimum Value is " << getMinValue(arr, size) << endl;

    return 0;
}