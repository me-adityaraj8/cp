#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        
        int cnt =0 ;
        int maxCnt = 0;
        for(int i=0; i<n; i++){
            if (a[i]==0){
                cnt++;
                maxCnt = max(maxCnt, cnt);
 
            }
            else{
                cnt = 0;
            }
        }
        cout << maxCnt << endl;
    }
    return 0;
}