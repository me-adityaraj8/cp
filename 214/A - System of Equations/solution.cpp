#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int count = 0;
 
    // Iterate over possible values of 'a' (limited by a^2 <= n)
    for (int a = 0; a * a <= n; a++) {
        int b = n - a * a; 
        if (b >= 0 && (a + b * b == m)) {
            count++;
        }
    }
 
    cout << count << endl;
    return 0;
}