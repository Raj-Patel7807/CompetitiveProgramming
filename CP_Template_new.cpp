/**
 *      Author : Raj Patel
 *      @Raj_Patel_7807
**/

#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "D:/Code_PlayGround/C++/Header/debug.hpp"
#else
#define debug(...) 7807
#endif
using namespace std;

using ll = long long int;
using ull = unsigned long long int;
using ld = long double;
template <typename T, typename V> using pr = pair<T, V>;
template <typename T> using vc = vector<T>;
template <typename T, typename V> using umap = unordered_map<T, V>;
template <typename T> using uset = unordered_set<T>;
template <typename T> using pq = priority_queue<T>;
template <typename T> using pqg = priority_queue<T, vector<T>, greater<T>>;
#define int ll
#define double ld

#define endl '\n'
#define ln cout << '\n';
#define PUSH push_back
#define POP pop_back
#define FF first
#define SS second
#define UB upper_bound
#define LB lower_bound
#define LEN(x) (ll)((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define FOR1(s) for(ll i=0; i<(s); ++i)
#define FOR2(i, s) for(ll i=0; i<(s); ++i)
#define FOR3(i, s, e) for(ll i=(s); i<(e); ++i)
#define FOR4(i, s, e, inc) for(ll i=(s); i<(e); i+=(inc))
#define FORR1(s) for(ll i=(s)-1; i>=0; --i)
#define FORR2(i, s) for(ll i=(s)-1; i>=0; --i)
#define FORR3(i, s, e) for(ll i=(s)-1; i>=(e); --i)
#define FORR4(i, s, e, dec) for(ll i=(s)-1; i>=e; i-=dec)
#define GET_FOR(a, b, c, d, LOOP, ...) LOOP
#define FOR(...) GET_FOR(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define FORR(...) GET_FOR(__VA_ARGS__, FORR4, FORR3, FORR2, FORR1)(__VA_ARGS__)
#define FORE(x, a) for(auto& x : (a))

template <typename... T> inline void INPUT(T&... args) { ((cin >> args), ...); }
template <typename... T> inline void OUTPUT(bool F, T&&... args) { ((cout << args << (F ? '\n' : ' ')), ...); }
#define IN(T, ...) T __VA_ARGS__; INPUT(__VA_ARGS__);
#define OUT(...) OUTPUT(true, __VA_ARGS__);
#define OUTT(...) OUTPUT(false, __VA_ARGS__);
#define VIN(T, name, n) vector<T> name(n); for(auto& x : name) cin >> x;
#define VVIN(T, name, n, m) vector<vector<T>> name(n, vector<T>(m)); FOR(i, n) FOR(j, m) cin >> name[i][j];
#define VOUT(a) for(auto x : a) { cout << x << ' '; } cout << '\n';
inline void YES(bool F = true, bool S = false) { cout << (F ? (S ? "Yes\n" : "YES\n") : (S ? "No\n" : "NO\n")); }
inline void NO(bool F = true, bool S = false) { cout << (F ? (S ? "No\n" : "NO\n") : (S ? "Yes\n" : "YES\n")); }
template <typename T> inline ll minid(const vector<T>& v) { return distance(v.begin(), min_element(all(v))); }
template <typename T> inline ll maxid(const vector<T>& v) { return distance(v.begin(), max_element(all(v))); }

constexpr ld PI = 3.1415926535897932384626L, E = 2.7182818284590452353602L;
constexpr ll INF = 1e18 + 9, MOD = 1e9 + 7, MOD1 = 998244353;

inline ll TT(bool flag = false) { ll tt = 1; if(flag) { cin >> tt; } return tt; }
inline void SETUP_IO(bool FILE_IO = true) {
    ios_base :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    if(FILE_IO) {
        #ifndef ONLINE_JUDGE
            freopen("D:/Code_PlayGround/C++/Input.txt", "r", stdin);
            freopen("D:/Code_PlayGround/C++/Output.txt", "w", stdout);
            freopen("D:/Code_PlayGround/C++/Debug.txt", "w", stderr);
        #endif
    }
}

//==========^==========<<   C O D E   B Y   R A J  P A T E L   >>==========^==========//

void solve(ll tt) {
    IN(ll, n); VIN(ll, a, n);

    vc<pr<ll, pr<ll, ll>>> vp(n);
    FOR(n) {
        vp[i].FF = a[i]; vp[i].SS.FF = i;
        vp[i].SS.SS = 0;
    } // debug(vp);

    sort(rall(vp));

    FOR(n) {
        if(i != 0 && vp[i].FF == vp[i-1].FF) {
            vp[i].SS.SS = vp[i-1].SS.SS;
        } else {
            vp[i].SS.SS = i+1;
        }
    } // debug(vp);

    sort(all(vp), [](const auto& a, const auto& b) {
        return a.SS.FF < b.SS.FF;
    });

    FOR(n) OUT(vp[i].SS.SS);
}

signed main() {
    SETUP_IO();
    ll tt = TT();
    FOR(i, tt) solve(i);
    return 0;
}

// NOTE:
// rotate(v.begin(), v.end()-r, v.end()); - Rotate vector r times right;
// rotate(v.begin(), v.begin()+r, v.end()); - Rotate vector r times left;
// XOR Range Query: xor[l, r] = xor[l - 1] ^ xor[r]
