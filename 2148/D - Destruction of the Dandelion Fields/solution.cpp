#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long sumE = 0;
        vector<long long> odd;
        for (int i = 0; i < n; ++i) {
            long long a; cin >> a;
            if (a % 2 == 0) sumE += a;
            else odd.push_back(a);
        }
        if (odd.empty()) {
            cout << 0 << '
';
            continue;
        }
        sort(odd.begin(), odd.end(), greater<long long>());
        int take = (int((int)odd.size()) + 1) / 2;
        long long sumO = 0;
        for (int i = 0; i < take; ++i) sumO += odd[i];
        cout << (sumE + sumO) << '
';
    }
    return 0;
}