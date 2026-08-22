#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N;
    if (!(cin >> N)) return 0;
    long long ans = LLONG_MAX;
    for (int i = 0; i < N; ++i) {
        long long a; cin >> a;
        if (a == 0) {
            cout << 0 << '
';
            return 0;
        }
        ans = min(ans, llabs(a));
    }
    cout << ans << '
';
    return 0;
}