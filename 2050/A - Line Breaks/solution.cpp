#include <iostream>
#include <vector>
#include <string>
using namespace std;
 
int main() {
    int t;
    cin >> t;  
    for (int i = 0; i < t; i++) {
        int n, m;
        cin >> n >> m;  
        vector<string> words(n);
        
        for (int i = 0; i < n; i++) {
            cin >> words[i];
        }
        
        int current_length = 0;
        int x = 0;  
        
        for (int i = 0; i < n; i++) {
            current_length += words[i].length();
            if (current_length <= m) {
                x++; 
            } else {
                break; 
            }
        }
        
        cout << x << endl;
    }
    
    return 0;
}