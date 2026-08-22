# include<iostream>
# include <vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        int p=0;
        for(int i=0;i<n;i++){
            
            p ^= a[i];
        }
        if(n%2==0){
            if(p != 0){
                cout<<"-1"<<endl;
            }
            else{
                cout<<"0"<<endl;
            }
        }
        else{
            cout<<p<<endl;
        }
    }
    return 0;
}