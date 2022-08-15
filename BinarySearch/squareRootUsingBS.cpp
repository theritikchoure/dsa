#include<iostream>
using namespace std;

// Status: solved

// Ques Source: coding ninjas

// Ques : You are given a positive integer ‘N’. Your task is to find and return its square root. 
// If ‘N’ is not a perfect square, then return the floor value of sqrt(N).

/* Example 1 
    Input: N = 4
    Output: 2
*/

/* Example 2 
    Input: N = 100
    Output: 10
*/

int squareRootUsingBS(long long int n) {
    int start = 0;
    int end = n;

    long long int mid = start + (end - start) / 2;

    long long int ans;

    while(start <= end) {
        long long int square = mid*mid;

        if(square == n) {
            return mid;
        }

        if(square < n) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return ans;

}

int main() {

    long long int N = 9999999991;

    cout << "Square root of " << N << " is " << squareRootUsingBS(N) << endl;

    return 0;
}