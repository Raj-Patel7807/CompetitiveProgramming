/*╔═══════════════════════════════════════════════════════════╗*\
  ║                                                           ║
  ║                      @Raj_Patel_7807                      ║
  ║                    Code By : Raj_Patel                    ║
  ║                                                           ║
\*╚═══════════════════════════════════════════════════════════╝*/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

using ll = long long int;
using ull = unsigned long long int;
using db = double;
using ld = long double;
using vl = vector<ll>;
using pl = pair<ll, ll>;
using ml = map<ll, ll>;
template <typename T> using vc = vector<T>;
template <typename T> using vvc = vector<vector<T>>;
template <typename T, typename V> using vcp = vector<pair<T, V>>;
template <typename T, typename V> using umap = unordered_map<T, V>;
template <typename T> using uset = unordered_set<T>;
template <typename T> using stk = stack<T>;
template <typename T> using qu = queue<T>;
template <typename T> using pq = priority_queue<T>;
template <typename T> using pqg = priority_queue<T, vector<T>, greater<T>>;
using idset = tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>;
#define int ll

#define FOR1(s) for(ll i=0; i<(s); ++i)
#define FOR2(i, s) for(ll i=0; i<(s); ++i)
#define FOR3(i, s, e) for(ll i=(s); i<(e); ++i)
#define FOR4(i, s, e, inc) for(ll i=(s); i<(e); i+=(inc))
#define FORR1(s) for(ll i=(s); i>=0; --i)
#define FORR2(i, s) for(ll i=(s); i>=0; --i)
#define FORR3(i, s, e) for(ll i=(s); i>=(e); --i)
#define GET_FOR(a, b, c, d, LOOP, ...) LOOP
#define GET_FORR(a, b, c, LOOP, ...) LOOP
#define FOR(...) GET_FOR(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define FORR(...) GET_FORR(__VA_ARGS__, FORR3, FORR2, FORR1)(__VA_ARGS__)
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
#define OK return
#define PB push_back
#define EB emplace_back
#define INS insert
#define PPB pop_back
#define MP make_pair
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

#ifndef ONLINE_JUDGE
#include "../Header/debug.hpp"
#else
#define debug(...) 7807
#endif

const ld PI = 3.1415926535897932384626L;
const ld E = 2.7182818284590452353602L;
const ll INF = 1e18 + 9;
const ll MOD = 1e9 + 7;
const ll MOD1 = 998244353;

#define cntSetBit __builtin_popcountll
inline ll gcd(ll a, ll b) { while(b) { a %= b; swap(a, b); } return a; }
inline ll lcm(ll a, ll b) { return ((a / gcd(a, b)) * b); }
inline bool isPrime(ll n) {
    if(n <= 1) return false; if(n <= 3) return true; if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i=5; i*i<=n; i+=6) { if(n % i == 0 || n % (i+2) == 0) return false; } return true;
}
void prime(ll n, vector<bool>& ispr) {
    ispr.resize(n+1, true); ispr[0] = ispr[1] = false;
    for(ll i=2; i*i<=n; i++) { if(ispr[i]) { for(ll j=i*i; j<=n; j+=i) { ispr[j] = false; } } }
}
void prime(ll n, vector<ll>& pr) {
    vector<bool> ispr; prime(n, ispr); for(ll i=2; i<=n; i++) { if(ispr[i]) { pr.push_back(i); } }
}
inline ll power(ll a, ll b, ll mod = MOD) {
    ll ans = 1; a %= mod; while(b > 0) { if(b & 1) { ans = (ans * a) % mod; } a = (a * a) % mod; b >>= 1; } return ans;
}
inline void factorial(ll n, vector<ll>& a) { a.resize(n+1, 1); for(ll i=1; i<=n; i++) { a[i] = (a[i-1] * i) % MOD; } }
inline bool isPowOfTwo(ll n) { return ((n > 0) && !(n & (n-1))); }
inline bool isPerfectSq(ll n) { if(n < 0) return false; ll sr = static_cast<ll>(sqrt(n)); return (sr*sr == n); }
inline bool compbyss(const pair<ll, ll>& a, const pair<ll, ll>& b) { return a.second < b.second; }
inline ll msbPos(ll n) { if(n == 0) { return -1; } return (63 - (__builtin_clzll(n))); }
inline ll modadd(ll a, ll b, ll mod = MOD) { return ((a % mod + b % mod) % mod); }
inline ll modmult(ll a, ll b, ll mod = MOD) { return ((a % mod * b % mod) % mod); }
inline ll modinv(ll a, ll mod = MOD) { return power(a, mod-2, mod); }
inline ll moddiv(ll a, ll b, ll mod = MOD) { return modmult(a, modinv(b, mod), mod); }
inline ll TT(bool flag = false) { ll tt = 1; if(flag) { cin >> tt; } return tt; }
inline void SETUP_IO(bool FILE_IO = false) {
    ios_base :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    if(FILE_IO) {
        #ifndef ONLINE_JUDGE
            freopen("Input.txt", "r", stdin);
            freopen("Output.txt", "w", stdout);
            freopen("Debug.txt", "w", stderr);
        #endif
    }
}

//==========^==========<<   C O D E   B Y   R A J  P A T E L   >>==========^==========//

inline void solve(ll tt) {
    
}

signed main() {
    SETUP_IO();

    ll tt = TT(
    );
    FOR(tt) solve(i);

    return 0;
}

// NOTE:
// rotate(v.begin(), v.begin()+v.size()-r, v.end()); - for rotating vector r times right;
// rotate(v.begin(), v.begin()+r, v.end()); - For rotating vector r times left;
// For `idset`:
//     find_by_order(k) - O(log n) - Find the k-th smallest element (0-based index);
//     order_of(value) - O(log n) - Find the index of a value in the sorted set;
//     Can find the k-th smallest element, or get the position of a value in sorted order;
