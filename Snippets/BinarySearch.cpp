#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

ll binarySearch(vector<ll>& a, ll l, ll r, ll key) {
    ll mid;
    while(r - l > 1) {
        mid = l + (r - l) / 2;
        if(a[mid] <= key) l = mid; else r = mid;
    }
    return l;
}

int main() {

    

    return 0;
}