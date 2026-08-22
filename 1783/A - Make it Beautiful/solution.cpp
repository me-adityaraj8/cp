#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int s = 0;
        for(int i=0;i<n;i++){
            cin>>a[i]; 
            s+=a[i];
        }
        int k = a.size();
        vector<int> x(a);
        sort(x.begin(), x.end());
        if(x[0] == x[n-1]){
            cout<<"NO
";
            continue;
        }
        else{
            cout<<"YES
";
        }
        
        sort(a.begin(), a.end());     
     
        for(int i=0;i<n/2;i++){
             swap(a[i], a[k-i-1]); 
        }  
        for(int i=0;i<n-1;i++){
            if(a[i]==a[i+1]){
                swap(a[i], a[k-1]);
            } 
        }
        
        for(int i=0;i<n;i++){
            cout<<a[i]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}