#include<iostream>
using namespace std;

//Print Array
void PrintArray(int array[]) {
    cout << "Printing Array" << endl;
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }
    cout << "Printing Completed" << endl;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};

    PrintArray(arr);
    return 0;
}