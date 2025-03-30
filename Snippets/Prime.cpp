#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

inline bool isPrime(ll n) {
    if(n <= 1) return false; if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i=5; i*i<=n; i+=6) { if(n % i == 0 || n % (i+2) == 0) return false; }
    return true;
}
void prime(ll n, vector<bool>& ispr) {
    ispr.resize(n+1, true); ispr[0] = ispr[1] = false;
    for(ll i=2; i*i<=n; i++) {
        if(ispr[i]) { for(ll j=i*i; j<=n; j+=i) { ispr[j] = false; } }
    }
}
void prime(ll n, vector<ll>& pr) {
    vector<bool> ispr; prime(n, ispr);
    for(ll i=2; i<=n; i++) { if(ispr[i]) { pr.push_back(i); } }
}

int main() {

    

    return 0;
}