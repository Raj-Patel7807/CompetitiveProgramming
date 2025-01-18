#include <bits/stdc++.h>
using namespace std;

// O(n^2);
int algo1(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    int ans = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i] == b[j]) {
                ans++;
            }
        }
    }

    return ans;
}

// O(n);
int algo2(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();
    unordered_set<int> s(a.begin(), a.end());

    int ans = 0;
    for(int i=0; i<m; i++) {
        if(s.find(b[i]) != s.end()) {
            ans++;
        }
    }

    return ans;
}

// O(n logn);
int algo3(vector<int>& a, vector<int>& b) {
    int n = a.size();
    int m = b.size();

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int ans = 0;
    while(i < n && j < m) {
        if(a[i] == b[j]) {
            ans++;
            i++; j++;
        } else if(a[i] < b[j]) {
            i++;
        } else {
            j++;
        }
    }

    return ans;
}

int main() {

    vector<int> a = {5, 2, 8, 9, 4};
    vector<int> b = {3, 2, 9, 5};

    cout << algo1(a, b) << endl;
    cout << algo2(a, b) << endl;
    cout << algo3(a, b) << endl;

    return 0;
}