#include<iostream>

using namespace std;

int fibonacciPrint(int n) {
    if(n <= 1) return n;

    return fibonacciPrint(n-1)+fibonacciPrint(n-2);
}

int main() {

    int n;
    
    cin >> n;

    cout << fibonacciPrint(n) << endl;
    return 0;
}