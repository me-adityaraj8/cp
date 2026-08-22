#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    int t;
    if(!(cin>>t)) return 0;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int z=0;
        for(char c: s) if(c=='0') z++;
        int c=0;
        for(int i=0;i<n;i++){
            if(i<z){
                if(s[i]=='1') c++;
            } else {
                if(s[i]=='0') c++;
            }
        }
        cout << c/2 << '
';
    }
    return 0;
}