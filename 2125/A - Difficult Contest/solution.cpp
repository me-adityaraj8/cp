#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        sort(s.begin(), s.end());     
        reverse(s.begin(), s.end());  
 
        cout << s << '
';
    }
 
    return 0;
}