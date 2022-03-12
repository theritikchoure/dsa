#include<iostream>
using namespace std;

// Pattern - for n = 3
// *
// **
// ***

int main() {

    int n;
    cin>>n;

    int i = 1;
    int count = 1;
    while(i<=n) {
        int j = 1;
        while(j<=i) {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}