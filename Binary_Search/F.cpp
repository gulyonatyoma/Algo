#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define int long long

void solve() {
    int n, x, y; cin >> n >> x >> y;
    int time = min(x, y);
    int l = -1, r = 1e9;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (m / x + m / y + 1 < n) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << r + time;
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