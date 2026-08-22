#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int n ;
	cin>>n;
	
    int arr[n];
    for (int i = 0 ; i<n ; i++){
        cin>>arr[i];
    }
    
    int count =0;
    int worst = arr[0];
    int best =  arr[0];
    for(int i=1 ; i<n ; i++){
        if(arr[i]<worst){
            worst = arr[i];
            count++;
        }
        if(arr[i]>best){
            best = arr[i];
            count++;
        }
        
    }
    cout << count << endl;
 
}