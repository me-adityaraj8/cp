#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        int ans = -1;
 
        if(k % 2 == 0){  
            if(n % 2 == 0){
                ans = 1;
            }
        }
        else { 
            if(n % 2 == 0){
                ans = 1;
            }
            else if(n >= k){
                ans = 1;
            }
        }
 
        if(ans == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}