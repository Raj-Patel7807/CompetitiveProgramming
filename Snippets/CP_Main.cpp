/**
 *      Author : Raj Patel
 *      @Raj_Patel_7807
**/

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
    #include "D:/Code_PlayGround/C++/Header/debug.hpp"
#else
    #define debug(...) 7807
#endif

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// using idset = tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>;

using ll = long long int;
using ull = unsigned long long int;
using db = double;
using ld = long double;
template <typename T, typename V> using pr = pair<T, V>;
template <typename T> using vc = vector<T>;
template <typename T, typename V> using umap = unordered_map<T, V>;
template <typename T> using uset = unordered_set<T>;
template <typename T> using stk = stack<T>;
template <typename T> using qu = queue<T>;
template <typename T> using dqu = deque<T>;
template <typename T> using pq = priority_queue<T>;
template <typename T> using pqg = priority_queue<T, vector<T>, greater<T>>;
#define int ll

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
#define VIN(T, name, n) vector<T> name(n); for(ll i=0; i<(n); ++i) cin >> name[i];
#define VVIN(T, name, n, m) vector<vector<T>> name(n, vector<T>(m)); FOR(i, n) FOR(j, m) cin >> name[i][j];
#define VOUT(a) for(auto x : a) { cout << x << ' '; } cout << '\n';
inline void YES(bool F = true, bool S = false) { cout << (F ? (S ? "Yes\n" : "YES\n") : (S ? "No\n" : "NO\n")); }
inline void NO(bool F = true, bool S = false) { cout << (F ? (S ? "No\n" : "NO\n") : (S ? "Yes\n" : "YES\n")); }

#define endl '\n'
#define ln cout << '\n';
#define PB push_back
#define POP pop_back
#define FF first
#define SS second
#define UB(v, a) upper_bound((v).begin(), (v).end(), (a))
#define LB(v, a) lower_bound((v).begin(), (v).end(), (a))
#define LEN(x) ll((x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define ssort(x) sort((x).begin(), (x).end())
#define rsort(x) sort((x).rbegin(), (x).rend())
#define maxval(v) *max_element((v).begin(), (v).end())
#define minval(v) *min_element((v).begin(), (v).end())
#define maxid(v) max_element((v).begin(), (v).end()) - ((v).begin())
#define minid(v) min_element((v).begin(), (v).end()) - ((v).begin())

const ld PI = 3.1415926535897932384626L;
const ld E = 2.7182818284590452353602L;
const ll INF = 1e18 + 9;
const ll MOD = 1e9 + 7;
const ll MOD1 = 998244353;

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

inline void solve(ll tt) {
    // Code here
}

signed main() {
    SETUP_IO();

    ll tt = TT(); // pass 1 for multiple test cases;
    FOR(i, tt) solve(i);

    return 0;
}

// NOTE:
// rotate(v.begin(), v.begin()+v.size()-r, v.end()); - for rotating vector r times right;
// rotate(v.begin(), v.begin()+r, v.end()); - For rotating vector r times left;
// For `idset`:
//     find_by_order(k) - O(log n) - Find the k-th smallest element (0-based index);
//     order_of(value) - O(log n) - Find the index of a value in the sorted set;
//     Can find the k-th smallest element, or get the position of a value in sorted order;
// xor[l, r] = xor[l - 1] ^ xor[r]
