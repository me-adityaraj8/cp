#include <iostream>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cntNeg = 0, cntPos = 0;
 
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (x == -1) cntNeg++;
            else cntPos++;
        }
 
        int operations = 0;
 
        while (cntPos < cntNeg) {
            cntNeg--;
            cntPos++;
            operations++;
        }
 
        if (cntNeg % 2 == 1) {
            operations++;
        }
 
        cout << operations << "
";
    }
    return 0;
}