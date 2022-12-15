// question: maximum sum of subarray of size k

#include <iostream>
#include<algorithm>

using namespace std;

int maxSum(int arr[], int arrSize, int k) {
    int i, j = 0;
    int sum = 0;
    int mxsm = INT_MIN;

    while(j < arrSize) {
        sum = sum + arr[j];
        if(j - i + 1 == k) {
            mxsm = max(sum, mxsm);
            sum = sum - arr[i];
            i++;
            j++;
        } else {
            j++;
        }
    }

    return mxsm;
}

int main() {

    int arr[5] = {7, 8, 5, 1, 2};
    int arrSize = 5;
    int k = 3;

    cout << maxSum(arr, arrSize, k) << endl;

    return 0;
}