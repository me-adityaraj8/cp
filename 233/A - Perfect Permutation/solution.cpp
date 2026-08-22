#include<iostream>
using namespace std ;
 
 int main(){
int n ;
cin >> n;
 
    if (n % 2 != 0) {
        cout << -1 << endl;  
        return 0;
    } 
    
int arr[n+1];
 
for ( int i=0 ; i<=n ;i++){
    arr[i]=i;
    
}
 
for ( int i=1 ; i<=n ; i++){
    swap(arr[i],arr[i+1]);
    i++;
}
 
for ( int i=1 ; i <= n ; i++){
    cout<<arr[i]<<" ";
}
    cout << endl;
 
    return 0;
 
}