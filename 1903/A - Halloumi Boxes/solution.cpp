#include <iostream>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int s = 0;
        int x[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
            s += x[i];
        }
        bool sorted = true;
        for(int i=0;i<n-1;i++){
            if(x[i]>x[i+1])
                sorted = false;
        }
         if (sorted) {
        cout << "YES
";
    } else {
        if (k > 1) {
            cout << "YES
";
        } else {
        cout << "NO
";
        }
    }
}
}