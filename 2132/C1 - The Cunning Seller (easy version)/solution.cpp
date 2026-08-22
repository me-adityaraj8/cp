#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    if (!(cin >> t)) return 0;
 
    vector<long long> p(25, 1);
    for (int i = 1; i < 25; i++) p[i] = p[i - 1] * 3LL;
 
    while (t--) {
        long long n; 
        cin >> n;
 
        long long x = n, y = 0, z = 0;
        while (x > 0) {
            int d = x % 3;
            if (d) {
                if (y == 0) {
                    z += d * 3LL;
                } else {
                    z += d * (p[y + 1] + y * p[y - 1]);
                }
            }
            x /= 3;
            y++;
        }
        cout << z << "
";
    }
    return 0;
}