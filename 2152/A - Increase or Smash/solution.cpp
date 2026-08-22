#include <iostream>
#include <set>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> a;
        for(int i=0;i<n;i++){
            
            int p;
            cin>>p;
            a.insert(p);
        }
        int q = a.size();
        cout<<2*q-1<<endl;
        
    }
}