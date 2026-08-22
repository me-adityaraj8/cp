#include <iostream>
#include <vector>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        int q = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==2) q++;
        }
        if(q % 2 != 0){
            cout << -1 << endl;
            continue;
        }
        int p = 0;
        int found = 0;
        for(int i=0;i<n;i++){
            if(a[i]==2) p++;
            if(p==(q-p)){
                cout<<i+1<<endl;
                found =1;
                break;
                
            }
        }
                if(!found) cout << -1 << endl;  
 
    }
    return 0;
}