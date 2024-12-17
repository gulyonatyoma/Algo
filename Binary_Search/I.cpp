#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define int long long

void solve() {
    int w, h, n; cin >> w >> h >> n;
    int l = 0, r = max(w, h) * n;
    while (r - l > 1) {
        int m = (r + l) >> 1;
        if ((m / w) * (m / h) >= n) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << r;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) {
        solve();
        cout << '\n';
    }
    return 0;
}