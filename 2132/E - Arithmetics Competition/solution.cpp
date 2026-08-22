#include <bits/stdc++.h>
using namespace std;
 
void run() {
    int n, m, q;
    cin >> n >> m >> q;
 
    vector<long long> A(n), B(m);
    for (int i = 0; i < n; i++) cin >> A[i];
    for (int j = 0; j < m; j++) cin >> B[j];
 
    sort(A.rbegin(), A.rend());
    sort(B.rbegin(), B.rend());
 
    vector<long long> P1(n + 1), P2(m + 1);
    for (int i = 0; i < n; i++) P1[i + 1] = P1[i] + A[i];
    for (int j = 0; j < m; j++) P2[j + 1] = P2[j] + B[j];
 
    while (q--) {
        int x, y, z;
        cin >> x >> y >> z;
 
        int L = max(z - y, 0);
        int R = min(x, z);
 
        while (L < R) {
            int m1 = L + (R - L) / 3;
            int m2 = R - (R - L) / 3;
 
            long long v1 = P1[m1] + P2[z - m1];
            long long v2 = P1[m2] + P2[z - m2];
 
            if (v1 < v2) {
                L = m1 + 1;
            } else if (v1 > v2) {
                R = m2 - 1;
            } else {
                L = m1 + 1;
                R = m2 - 1;
            }
        }
 
        if (L < 0) {
            for (int i = 0; i < n; i++) {
                if (A[i] < 0) {
                    L = i;
                    break;
                }
            }
        }
 
        cout << P1[L] + P2[z - L] << "
";
    }
}
 
int main() {
    int t; 
    cin >> t;
    while (t--) run();
    return 0;
}