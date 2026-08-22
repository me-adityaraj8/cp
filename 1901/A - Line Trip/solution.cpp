#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int t; 
    if(!(cin >> t)) return 0;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin >> a[i];
        int mx = a[0];                 
        for(int i=1;i<n;i++) mx = max(mx, a[i] - a[i-1]);
        int lastGap = x - a[n-1];
        mx = max(mx, 2 * lastGap);
        cout << mx << "
";            
    }
    return 0;
}