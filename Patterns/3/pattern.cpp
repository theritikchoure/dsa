#include<iostream>
using namespace std;

// Pattern - for n = 3
// 123
// 123
// 123

// Pattern - for n = 5
// 12345
// 12345
// 12345
// 12345
// 12345

int main() {

    int n;
    cin>>n;

    int i = 1;
    while(i<=n) {
        int j = 1;
        while(j<=n) {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
}