#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
const ll MOD = 1e9+7;

inline void factorial(ll n, vector<ll>& a) {
    a.resize(n+1, 1);
    for(ll i=1; i<=n; i++) { a[i] = (a[i-1] * i) % MOD; }
}
inline ll factorial(ll n) {
    ll ans = 1;
    for(ll i=1; i<=n; i++) { ans = (ans * i) % MOD; } return ans;
}
inline ll nCr(ll n, ll r, vector<ll>& fact, vector<ll>& inv) {
    if(r > n) return 0;
    return (fact[n] * ((inv[r] * inv[n-r]) % MOD)) % MOD;
}

int main() {

    

    return 0;
}