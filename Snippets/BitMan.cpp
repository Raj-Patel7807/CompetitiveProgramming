#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

#define cntSetBit __builtin_popcountll
inline ll msbPos(ll n) { if(n == 0) { return -1; } return (63 - (__builtin_clzll(n))); }
inline ll getBit(ll n, ll pos) { return ((n >> pos) & 1); }
inline ll setBit(ll n, ll pos) { return (n | (1 << pos)); }
inline ll clearBit(ll n, ll pos) { return (n & (~(1 << pos))); }
inline ll toggleBit(ll n, ll pos) { return (n ^ (1 << pos)); }
inline ll updateBit(ll n, ll pos, ll bit) { return (n & (~(1 << pos)) | (bit << pos)); }

int main() {

    

    return 0;
}