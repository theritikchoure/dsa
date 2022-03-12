#include<iostream>
using namespace std;

// Pattern - for n = 3
// 1
// 22
// 333

int main() {

    int n;
    cin>>n;

    int i = 1;
    int count = 1;
    while(i<=n) {
        int j = 1;
        while(j<=i) {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
}