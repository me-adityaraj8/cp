#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    if (!(cin >> t)) return 0;
 
    while (t--) {
        int n;
        long long c;
        cin >> n >> c;
 
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
 
        long long ans = 0;
        vector<int> b;
 
        for (int i = 0; i < n; ++i) {
            if (a[i] > c) {
                ++ans;
            } else {
                long long x = c / a[i];
                int d = 0;
                while ((1LL << (d + 1)) <= x) ++d;
                b.push_back(d);
            }
        }
 
        sort(b.begin(), b.end());
        int tt = 0, ff = 0;
        for (int i = 0; i < b.size(); ++i) {
            if (tt <= b[i]) {
                ++ff;
                ++tt;
            }
        }
 
        ans += (int)b.size() - ff;
        cout << ans << '
';
    }
 
    return 0;
}