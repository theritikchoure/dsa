#include<iostream>

using namespace std;

// Paramaterized recursion
void printSumUsingPR(int n, int sum) {
    if(n == 0) {
        cout << sum << endl;
        return;
    };
    printSumUsingPR(n-1, sum + n);
}

// Functional recursion
int printSumUsingFR(int n) {
    if(n == 0) return 0;
    return n + printSumUsingFR(n-1);
}

int main() {

    int n;
    cin>>n;

    printSumUsingPR(n, 0);

    cout << printSumUsingFR(n);

    return 0;
}