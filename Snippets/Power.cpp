#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
const ll MOD = 1e9+7;

inline ll power(ll a, ll b, ll mod = MOD) {
    ll ans = 1; a %= mod;
    while(b > 0) {
        if(b & 1) { ans = (ans * a) % mod; }
        a = (a * a) % mod; b >>= 1;
    }
    return ans;
}
inline bool isPowOfTwo(ll n) { return ((n > 0) && !(n & (n-1))); }
inline bool isPerfectSq(ll n) {
    if(n < 0) return false; ll sr = static_cast<ll>(sqrt(n));
    return (sr*sr == n);
}

int main() {

    

    return 0;
}