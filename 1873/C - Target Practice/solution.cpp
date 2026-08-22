#include <iostream>
using namespace std;
 
int main() {
    int t; cin >> t;
    while (t--) {
        int score = 0;
        for (int i = 0; i < 10; i++) {
            string row; cin >> row;
            for (int j = 0; j < 10; j++) {
                if (row[j] == 'X') {
                    score += min({i, j, 9 - i, 9 - j}) + 1;
                }
            }
        }
        cout << score << "
";
    }
    return 0;
}