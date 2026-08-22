# include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d){
            cout<<"-1"<<endl;
            continue;
        }
        int res =0;
        res+=(d-b);
        a+=res;
        
        if(a<c){
            cout<<"-1"<<endl;
        }else{
            res+=(a-c);
            cout<<res<<endl;
        }
        
    }
    return 0;
}