#include <bits/stdc++.h>
using namespace std;
int main() {
 
    int t; 
    if(!(cin >> t)) return 0;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        auto ok = [&](int x, int y)->bool{
            int M = max(x,y), m = min(x,y);
            return M <= 2*(m + 1);
        };
        int a1 = a, b1 = b;            
        int a2 = c - a, b2 = d - b;    
        if(ok(a1,b1) && ok(a2,b2)) cout << "YES
";
        else cout << "NO
";
    }
    return 0;
}