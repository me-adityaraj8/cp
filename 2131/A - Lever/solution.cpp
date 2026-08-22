#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> x(n), y(n);
        for (int i = 0; i < n; i++) cin >> x[i];
 
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> y[i];
            if (x[i] > y[i]) {
                ans += (x[i] - y[i]);
            }
        } 
 
        cout << ans + 1 << "
";
    }
    return 0;
}