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
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define f(i, a, b) for (int(i) = (a); (i) < (b); ++(i))
#define fr(i, a, b) for (int(i) = (b) - 1; (i) >= (a); --(i))
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
 
// ================= Constants =================
constexpr int INF = 1 << 30;
constexpr ll LINF = 4e18;
#define mod 1000000007
#define PI acos(-1)
 
// ================= Template Helpers =================
template <typename T = int>
istream &operator>>(istream &in, vector<T> &v)
{
    for (auto &x : v)
        in >> x;
    return in;
}
 
// ================= Problem-specific solve =================
void solve()
{
    int n;
    cin >> n;
 
    map<ll, int> freq;
    f(i, 0, n)
    {
        ll x;
        cin >> x;
        freq[x]++;
    }
 
    vll vals;
    for (auto &p : freq)
        vals.pb(p.fi);
 
    ll res = 0, sumPairs = 0, top1 = 0, top2 = 0;
 
    for (auto &x : vals)
    {
        int cnt = freq[x];
 
        if (cnt >= 2)
        {
            ll pairSum = (cnt / 2) * 2 * x + sumPairs;
 
            ll best1 = top1, best2 = top2;
            if (cnt % 2)
            {
                if (x > best1)
                {
                    best2 = best1;
                    best1 = x;
                }
                else if (x > best2)
                    best2 = x;
            }
 
            if (2 * x < pairSum)
                res = max(res, pairSum);
 
            if (best1)
            {
                ll alt = pairSum + best1;
                if (2 * x < alt)
                    res = max(res, alt);
            }
 
            if (best2)
            {
                ll alt = pairSum + best1 + best2;
                if (2 * x < alt)
                    res = max(res, alt);
            }
        }
 
        if (cnt >= 1)
        {
            if (sumPairs)
            {
                ll val = sumPairs + x;
                if (2 * x < val)
                    res = max(res, val);
            }
            if (top1)
            {
                ll val = sumPairs + x + top1;
                if (2 * x < val)
                    res = max(res, val);
            }
        }
 
        sumPairs += (cnt / 2) * 2 * x;
 
        if (cnt % 2)
        {
            if (x > top1)
            {
                top2 = top1;
                top1 = x;
            }
            else if (x > top2)
                top2 = x;
        }
    }
 
    cout << res << '
';
}
 
int main()
{
    fast;
    test(t)
    {
        solve();
    }
    return 0;
}