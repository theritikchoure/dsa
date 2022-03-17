#include<iostream>
using namespace std;

int getSum(int num[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
       sum = num[i] + sum;
    }

    return sum;
}

int main() {

    int size;
    cin>>size;

   int arr[100];

    //Taking Input
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Sum of Array is " << getSum(arr, size) << endl;

    return 0;
}