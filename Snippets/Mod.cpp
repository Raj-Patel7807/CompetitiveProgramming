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
inline ll modAdd(ll a, ll b, ll mod = MOD) { return ((a % mod + b % mod) % mod); }
inline ll modSub(ll a, ll b, ll mod = MOD) { return (((a % mod - b % mod) + mod) % mod); }
inline ll modMult(ll a, ll b, ll mod = MOD) { return ((a % mod * b % mod) % mod); }
inline ll modInv(ll a, ll mod = MOD) { return power(a, mod-2, mod); }
inline ll modDiv(ll a, ll b, ll mod = MOD) { return modMult(a, modInv(b, mod), mod); }

int main() {

    

    return 0;
}