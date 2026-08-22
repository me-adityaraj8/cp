#include <iostream>
using namespace std;
 
long long a[200005], b[200005];
 
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        if (a[n-1] != b[n-1]) { cout << "NO
"; continue; }
        int i;
        for (i = n-2; i >= 0; i--)
            if (b[i] != a[i] && b[i] != (a[i] ^ a[i+1]) && b[i] != (a[i] ^ b[i+1])) break;
        cout << (i < 0 ? "YES
" : "NO
");
    }
}