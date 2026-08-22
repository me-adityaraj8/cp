#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    if (!(cin >> t)) return 0;
 
    while (t--) {
        int n;
        cin >> n;
 
        string a;
        cin >> a;
 
        int m;
        cin >> m;
 
        string b, c;
        cin >> b >> c;
 
        string x = a;
        for (int i = 0; i < m; i++) {
            if (c[i] == 'V') {
                x = b[i] + x;
            } else {
                x.push_back(b[i]);
            }
        }
        cout << x << "
";
    }
 
    return 0;
}