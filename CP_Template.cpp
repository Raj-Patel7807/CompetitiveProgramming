//=======================^===================================================================^=======================\\

/*

                                  * * * * * *       * * * * * *     * * * * * * * * * *                                 
                                * * * * * * * *   * * * * * * * *   * * * * * * * * * *                                 
                                * * *     * * *   * * *     * * *   * * * * * * * * * *                                 
                                * * *     * * *   * * *     * * *           * * *                                       
                                * * *     * * *   * * *     * * *           * * *                                       
                                * * * * * * * *   * * * * * * * *           * * *                                       
                                * * * * * * *     * * * * * * * *           * * *                                       
                                * * * * *         * * * * * * * *           * * *                                       
                                * * * * * *       * * *     * * *           * * *                                       
                                * * *  * * *      * * *     * * *   * * *   * * *                                       
                                * * *   * * *     * * *     * * *   * * *   * * *                                       
                                * * *    * * *    * * *     * * *    * * * * * *                                        
                                * * *     * * *   * * *     * * *     * * * * *                                         

*/

//=======================^===================================================================^=======================\\

/*
    @Raj_Patel_7807
    Code By : Raj_Patel
    Date : 26/12/2024    Time -> 20:35:10
    Problem : CPdefault
*/

#include <bits/stdc++.h>
using namespace std;

#define Author ios :: sync_with_stdio(false);
#define is cin.tie(nullptr);
#define RAJ_PATEL cout.tie(nullptr)
#define endl '\n'
#define rr return
#define precision(x) cout << fixed << setprecision(x)

using ll = long long int;
using db = double;
using ld = long double;
using vl = vector<ll>;
template <class T> using vc = vector<T>;
using vvl = vector<vector<ll>>;
using vpl = vector<pair<ll, ll>>;
template <class T, class V> using vpp = vector<pair<T, V>>;
using pl = pair<ll, ll>;
using ml = map<ll, ll>;
using uml = unordered_map<ll, ll>;
using stl = stack<ll>;
using ql = queue<ll>;
using pql = priority_queue<ll>;
using sl = set<ll>;
using usl = unordered_set<ll>;
#define int ll

// Loops
#define fo(i, s, e) for(ll i=(s); i<=(e); ++i)
#define foo(i, s, e, inc) for(ll i=(s); i<=(e); i+=(inc))
#define rfo(i, s, e) for(ll i=(s); i>=(e); --i)
#define ft(x, a) for(auto x : (a))
#define fq(q) while((q)--)

// Inputs
#define in(type, name) type name; cin >> name;
#define inn(type, n, k) type n, k; cin >> n >> k;
#define innn(type, n, m, k) type n, m, k; cin >> n >> m >> k;
#define vin(type, name, n) vector<type> name(n); for(ll i=0; i<(n); ++i) cin >> name[i];

// Outputs
inline void YES(bool flag = true) { if(flag) {cout << "YES\n";} else {cout << "NO\n";} }
inline void NO(bool flag = true) { if(flag) {cout << "NO\n";} else {cout << "YES\n";} }
#define out(n) cout << (n) << '\n';
#define outt(n) cout << (n) << ' ';
#define vout(a) for(auto x : a) { cout << x << ' '; } cout << '\n';

// STL
#define PB push_back
#define EB emplace_back
#define ins insert
#define PPB pop_back
#define MP make_pair
#define FF first
#define SS second
#define UB upper_bound
#define LB lower_bound
#define len(x) ll(x.size())
#define all(x) x.begin(), x.end()
#define sortall(x) sort(x.begin(), x.end())
#define maxval(v) *max_element(v.begin(), v.end())
#define minval(v) *min_element(v.begin(), v.end())
#define maxid(v) max_element(v.begin(), v.end()) - v.begin()
#define minid(v) min_element(v.begin(), v.end()) - v.begin()

// Debugging
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = "; _print(x); cerr << '\n';
#else
#define debug(x)
#endif
template <typename T>
void _print(T t) { cerr << t; }
template <typename T, typename V>
void _print(pair <T, V> p) { cerr << "{"; _print(p.first); cerr << ", "; _print(p.second); cerr << "}"; }
template <typename T>
void _print(vector <T> v) { cerr << "[ "; for(T i : v) {_print(i); cerr << ' ';} cerr << "]"; }
template <typename T>
void _print(set <T> v) { cerr << "[ "; for(T i : v) {_print(i); cerr << ' ';} cerr << "]"; }
template <typename T>
void _print(multiset <T> v) { cerr << "[ "; for(T i : v) {_print(i); cerr << ' ';} cerr << "]"; }
template <typename T, typename V>
void _print(map <T, V> v) { cerr << "[ "; for(auto i : v) {_print(i); cerr << ' ';} cerr << "]"; }

// Constants
const ld PI = 3.1415926535897932384626L;
const ld E = 2.7182818284590452353602L;
const ll INF = 1e18 + 9;
const ll MOD = 1e9 + 7;
const ll MOD1 = 998244353;

// Functions
#define countBit __builtin_popcount
#define countBitll __builtin_popcountll
inline ll gcd(ll a, ll b) { return (b == 0) ? a : gcd(b, a % b); }
inline ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
inline bool isPrime(ll n) {
    if(n <= 1) return false; if(n <= 3) return true; if(n % 2 == 0 || n % 3 == 0) return false;
    for(ll i=5; i*i<=n; i+=6) { if(n % i == 0 || n % (i+2) == 0) return false; }
    return true;
}
void prime(ll n, vector<bool>& isprime) {
    isprime.resize(n+1, true); isprime[0] = isprime[1] = false;
    for(ll i=2; i*i<=n; i++) { if(isprime[i]) { for(ll j=i*i; j<=n; j+=i) { isprime[j] = false; } } }
}
void prime(ll n, vector<ll>& primes) {
    vector<bool> isprime; prime(n, isprime);
    for(ll i=2; i<=n; i++) { if(isprime[i]) { primes.push_back(i); } }
}
inline ll power(ll a, ll b, ll mod = MOD) {
    ll ans = 1; a %= mod;
    while(b > 0) { if(b & 1) { ans = (ans * a) % mod; } a = (a * a) % mod; b >>= 1; }
    return ans;
}
inline void factorial(ll n, vector<ll>& facts) {
    facts.resize(n+1, 1); for(ll i=1; i<=n; i++) { facts[i] = (facts[i-1] * i) % MOD; }
}
inline bool isPowOfTwo(ll n) { return n > 0 && (n & (n-1)) == 0; }
inline bool isPerfectSq(ll n) { if(n < 0) return false; ll sr = static_cast<ll>(sqrt(n)); return (sr*sr == n); }
inline bool compbyss(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    if(a.second == b.second) { return a.first < b.first; } return a.second < b.second;
}
inline ll modsum(ll a, ll b, ll mod = MOD) { return (a % mod + b % mod) % mod; }
inline ll modsub(ll a, ll b, ll mod = MOD) { return ((a % mod - b % mod) + mod) % mod; }
inline ll modmult(ll a, ll b, ll mod = MOD) { return (a % mod * b % mod) % mod; }
inline ll modinv(ll a, ll mod = MOD) { return power(a, mod-2, mod); }
inline ll moddiv(ll a, ll b, ll mod = MOD) { return modmult(a, modinv(b, mod), mod); }
inline ll onbit(ll n, ll pos) { return n | (1LL << pos); }
inline ll offbit(ll n, ll pos) { return n & ~(1LL << pos); }
inline bool checkbit(ll n, ll pos) { return n & (1LL << pos); }

//=======================^===================================================================^=======================\\

void solve() {
    
}

signed main() {

    Author is RAJ_PATEL;

    // #ifndef ONLINE_JUDGE
    //     freopen("Input.txt", "r", stdin);
    //     freopen("Output.txt", "w", stdout);
    //     freopen("Error.txt", "w", stderr);
    // #endif

    ll tt = 1;
    // cin >> tt;

    while(tt--) {
        solve();
    }

    return 0;
}
