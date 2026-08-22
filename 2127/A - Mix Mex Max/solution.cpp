#include <iostream>
#include <vector>
using namespace std;
 
bool ok(vector<int>& a) {
    int v = -1;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == -1) continue;
        if (v == -1) v = a[i];
        else if (a[i] != v) return false;
    }
    return (v == -1) || (v > 0);
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        cout << (ok(a) ? "YES" : "NO") << '
';
    }
    return 0;
}