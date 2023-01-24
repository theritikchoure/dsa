#include<bits/stdc++.h>

using namespace std;

// Print multiple subsequences
void printMS(int ind, vector<int> &ds, int s, int sum , int arr[], int n) {
    if(ind == n) {
        if(s == sum) {
            for(auto it:ds) {
                cout << it << " ";
            }
            cout << endl;

        }
        return;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];

    printMS(ind+1, ds, s, sum, arr, n);

    ds.pop_back();
    s -= arr[ind];

    printMS(ind+1, ds, s, sum, arr, n);

}

// Print only anyone subsequences
bool printSS(int ind, vector<int> &ds, int s, int sum , int arr[], int n) {
    if(ind == n) {
        if(s == sum) {
            for(auto it:ds) {
                cout << it << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    ds.push_back(arr[ind]);
    s += arr[ind];

    if(printSS(ind+1, ds, s, sum, arr, n) == true) {
        return true;
    }

    ds.pop_back();
    s -= arr[ind];

    if(printSS(ind+1, ds, s, sum, arr, n) == true) {
        return true;
    };

    return false;
}

// Print only the number of subsequences
int printNS(int ind, int s, int sum , int arr[], int n) {
    if(ind == n) {
        if(s == sum) return 1;
        return 0;
    }

    s += arr[ind];
    int l = printNS(ind+1, s, sum, arr, n);
    
    s -= arr[ind];

    int r = printNS(ind+1, s, sum, arr, n);
    
    return l+r;
}

int main() {

    int arr[3] = {1, 2, 1};
    int n = 3;
    int sum = 2;
    vector<int> ds;

    cout << "Print multiple subsequences" << endl;
    printMS(0, ds, 0, sum, arr, n);

    cout << "Print anyone subsequence" << endl;
    printSS(0, ds, 0, sum, arr, n);
 
    cout << "Print number of subsequence" << endl;
    cout << printNS(0, 0, sum, arr, n);
    return 0;
}