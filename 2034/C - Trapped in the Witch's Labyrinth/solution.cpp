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
 
int maxElement(vector<int> &v) { return *max_element(all(v)); }
int minElement(vector<int> &v) { return *min_element(all(v)); }
 
ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
 
string str = "UDLR";
ll n, m;
pair<ll, ll> dir[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
bool check(pair<ll, ll> to) {
  return to.fi >= 0 && to.fi < n && to.se >= 0 && to.se < m;
}
void solve() {
  cin >> n >> m;
  vector<string> s(n);
  f(i, 0, n) cin >> s[i];
  queue<pair<ll, ll>> q;
  vector<vector<bool>> ok(n, vector<bool>(m, false));
  f(i, 0, n) {
    f(j, 0, m) {
      bool ok2 = true;
      f(d, 0, 4) {
        if (s[i][j] == str[d] || s[i][j] == '?') {
          pair<ll, ll> v = {i + dir[d].fi, j + dir[d].se};
          if (check(v)) {
            ok2 = false;
          }
        }
      }
      if (ok2) {
        q.push({i, j});
        ok[i][j] = true;
      }
    }
  }
  while (!q.empty()) {
    auto v = q.front();
    q.pop();
    f(d, 0, 4) {
      pair<ll, ll> to = {v.fi + dir[d].fi, v.se + dir[d].se};
      if (check(to) && !ok[to.fi][to.se]) {
        bool ok3 = true;
        f(d2, 0, 4) {
          if (s[to.fi][to.se] == '?' || s[to.fi][to.se] == str[d2]) {
            pair<ll, ll> to2 = {to.fi + dir[d2].fi, to.se + dir[d2].se};
            if (check(to2) && !ok[to2.fi][to2.se]) {
              ok3 = false;
            }
          }
        }
        if (ok3) {
          ok[to.fi][to.se] = true;
          q.push({to.fi, to.se});
        }
      }
    }
  }
  ll res = 0;
  f(i, 0, n) {
    f(j, 0, m) {
      if (!ok[i][j]) {
        res++;
      }
    }
  }
  cout << res << endl;
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