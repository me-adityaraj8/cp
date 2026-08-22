#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main() {
 
    int t; 
    cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        string s; 
        cin >> s;
 
        vector<int> freq(26, 0);
 
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }
 
        int oddCount = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                oddCount++;
            }
        }
 
        int remLen = n - k;
        if (oddCount <= k + (remLen % 2)) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;
}