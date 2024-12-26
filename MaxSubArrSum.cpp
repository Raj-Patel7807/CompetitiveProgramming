// Maximum Subarray Sum;

#include <iostream>
#include <climits>
using namespace std;

// Brute Force Approach; Time Complexity = O(n^3);
int algo1(int arr[], int n) {
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int currSum = 0;
            for(int k=i; k<=j; k++) {
                currSum += arr[k];
                maxSum = max(maxSum, currSum);
            }
        }
    }
    return maxSum;
}

// Optimised Approach; Time Complexity = O(n^2);
int algo2(int arr[], int n) {
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        int currSum = 0;
        for(int j=i; j<n; j++) {
            currSum += arr[j];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

// Most Optimised Approach; Time Complexity = O(n);
// Kadane's Algorithm;
int kadaneAlgo(int arr[], int n) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}

int main() {

    int n = 8;
    int arr[n] = {-1, 2, 4, -3, 5, 2, -5, 2};

    cout << algo1(arr, n) << endl;
    cout << algo2(arr, n) << endl;
    cout << kadaneAlgo(arr, n) << endl;

    return 0;
}