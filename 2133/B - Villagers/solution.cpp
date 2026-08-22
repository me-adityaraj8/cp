#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        long long s = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            s += v[i];
        }
        sort(v.begin(), v.end());   
        reverse(v.begin(), v.end()); 
        
        long long r = 0;
        for (int i = 1; i < n; i += 2) {
            r += v[i];
        }
        cout << s - r << "
";
    }
    return 0;
}