#include<iostream>

using namespace std;

int getFactorial(int n) {
    return n;
}

int main() {
    int n;
    
    cout << "Enter the number to get factorial" << endl;
    cin >> n;

    cout << getFactorial(n) << endl;
    
    return 0;
}