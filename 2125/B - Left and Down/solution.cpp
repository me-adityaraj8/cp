#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long a,b,k;
        cin>>a>>b>>k;
        long long m=__gcd(a,b);
        if(a/m<=k && b/m<=k)  cout<<"1"<<endl;
        else cout<<"2"<<endl;
    }
    return 0;
    
}