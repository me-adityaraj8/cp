#include <iostream>
#include <vector>
#include <deque>
#include <string>
 
bool is_bad(const std::deque<int>& dq, int x) {
    if (dq.size() < 4) return false;
    std::vector<int> v;
    for (int i : dq) v.push_back(i);
    v.push_back(x);
    bool up = true, down = true;
    for (int i = 0; i < 4; ++i) {
        if (v[i] >= v[i + 1]) up = false;
        if (v[i] <= v[i + 1]) down = false;
    }
    return up || down;
}
 
void go() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) std::cin >> a[i];
 
    int l = 0, r = n - 1;
    std::deque<int> d;
    std::string res = "";
 
    while (l <= r) {
        int x = a[l], y = a[r];
        bool okL = !is_bad(d, x);
        bool okR = !is_bad(d, y);
        char ch;
 
        if (okL && okR) {
            if (l == r) {
                ch = 'L';
            } else {
                std::deque<int> dl = d, dr = d;
                dl.push_back(x);
                if (dl.size() > 4) dl.pop_front();
                dr.push_back(y);
                if (dr.size() > 4) dr.pop_front();
 
                bool safeL = false, safeR = false;
 
                if (l + 1 == r) {
                    if (!is_bad(dl, a[r])) safeL = true;
                    if (!is_bad(dr, a[l])) safeR = true;
                } else {
                    if (!is_bad(dl, a[l + 1]) || !is_bad(dl, a[r])) safeL = true;
                    if (!is_bad(dr, a[l]) || !is_bad(dr, a[r - 1])) safeR = true;
                }
 
                if (safeL && !safeR) ch = 'L';
                else if (!safeL && safeR) ch = 'R';
                else ch = (x < y ? 'L' : 'R');
            }
        } else if (okL) ch = 'L';
        else ch = 'R';
 
        if (ch == 'L') {
            res += 'L';
            d.push_back(x);
            if (d.size() > 4) d.pop_front();
            l++;
        } else {
            res += 'R';
            d.push_back(y);
            if (d.size() > 4) d.pop_front();
            r--;
        }
    }
 
    std::cout << res << '
';
}
 
int main() {
    int t;
    std::cin >> t;
    while (t--) go();
    return 0;
}