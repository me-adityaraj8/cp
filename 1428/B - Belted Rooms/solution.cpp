#pragma GCC optimize("O3")
 
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
// ================= Utility Macros =================
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) int(x.size())
#define fi first
#define se second
#define pb push_back
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define test(t)                                                                \
  int t;                                                                       \
  cin >> t;                                                                    \
  while (t--)
#define f(i, a, b) for (int i = (a); i < (b); ++i)
#define fr(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
#define cmpVec(a, b)                                                           \
  ((a).size() == (b).size() && equal((a).begin(), (a).end(), (b).begin()))
 
// ================= Constants =================
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
#define eps 1e-9
#define mod 1000000007
#define PI acos(-1)
#define mx9 1000000007
#define mx7 10000007
#define mx6 1000006
#define mx5 200005
 
// ================= Template Helpers =================
template <typename T = int> using Pair = pair<T, T>;
vector<string> RET = {"NO", "YES"};
 
template <typename T = int> istream &operator>>(istream &in, vector<T> &v) {
  for (auto &x : v)
    in >> x;
  return in;
}
 
template <typename T = int>
ostream &operator<<(ostream &out, const vector<T> &v) {
  for (const T &x : v)
    out << x << ' ';
  return out;
}
 
// ================= Extra Helper Functions =================
template <typename T> T maxOccurringElement(const vector<T> &v) {
  unordered_map<T, int> freq;
  for (auto &x : v)
    freq[x]++;
  T ans = v[0];
  int maxFreq = 0;
  for (auto &[key, val] : freq) {
    if (val > maxFreq || (val == maxFreq && key < ans)) {
      maxFreq = val;
      ans = key;
    }
  }
  return ans;
}
 
struct custom_hash {
  static uint64_t splitmix64(uint64_t x) {
    x += 0x9e3779b97f4a7c15;
    x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
    x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
    return x ^ (x >> 31);
  }
  size_t operator()(uint64_t x) const {
    static const uint64_t FIXED_RANDOM =
        chrono::steady_clock::now().time_since_epoch().count();
    return splitmix64(x + FIXED_RANDOM);
  }
};
 
int maxElement(vector<int> &v) { return *max_element(all(v)); }
int minElement(vector<int> &v) { return *min_element(all(v)); }
 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
 
void solve() {
  ll n;
  cin >> n;
  string s;
  cin >> s;
  ll a = 0, b = 0, c = 0;
  unordered_set<ll, custom_hash> st;
  for (ll i = 0; i < n; i++) {
    if (s[i] == '<')
      a++;
    else if (s[i] == '>')
      b++;
    else {
      c++;
      st.insert(i);
      st.insert((i + 1) % n);
    }
  }
  if (a == 0 || b == 0) {
    cout << n << endl;
  } else {
    cout << st.size() << endl;
  }
}
 
int main() {
  fast;
  int test_cases = 1;
  cin >> test_cases;
  while (test_cases--) {
    solve();
  }
  return 0;
}