#include <bits/stdc++.h>
using namespace std;

bool binarySearch1(vector<int>& arr, int k) {
    int s = 0, e = arr.size()-1;
    while(s <= e) {
        int mid = s + (e - s)/2;
        if(arr[mid] == k) {
            return true;
        }
        if(arr[mid] > k) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return false;
}

bool binarySearch2(vector<int>& arr, int k) {
    int n = arr.size();
    int s = 0;
    for(int e = n/2; e >= 1; e /= 2) {
        while(s + e < n && arr[s + e] <= k) {
            s += e;
        }
    }
    if(arr[s] == k) {
        return true;
    } else {
        return false;
    }
}

int main() {

    vector<int> arr = {1, 2, 3, 4, 5, 6, 7}; // Always Sorted;
    int key = 5;

    cout << binarySearch1(arr, key) << endl;
    cout << binarySearch2(arr, key) << endl;

    return 0;
}