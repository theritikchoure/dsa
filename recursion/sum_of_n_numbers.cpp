#include<iostream>

using namespace std;

// Paramaterized backtracking
void printSumUsingPB(int n, int sum) {
    if(n == 0) {
        cout << sum << endl;
        return;
    };
    printSumUsingPB(n-1, sum + n);
}

// Functional backtracking
int printSumUsingFB(int n) {
    if(n == 0) return 0;
    return n + printSumUsingFB(n-1);
}

int main() {

    int n;
    cin>>n;

    printSumUsingPB(n, 0);

    cout << printSumUsingFB(n);

    return 0;
}