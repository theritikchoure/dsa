#include<iostream>
using namespace std;

string name = "Ritik";

void printName(int i, int n) {
    if(i == n) return;
    cout << name << endl;
    printName(i+1, n);
}

int main() {

    int n;
    cin >> n;
    printName(0, n);
    
    return 0;
}
