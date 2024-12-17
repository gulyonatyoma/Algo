#include <bits/stdc++.h>

using namespace std;

#define ull long long

void solve() {
    ull a, b, k; cin >> a >> b >> k;
    ull ans = 0;
    for (ull y = 1; y <= 1e6; y++) {
        if (a <= y * y * y && y * y * y <= b) {
            ull L = max(y * y * y - k, a);
            ull R = min(y * y * y + k, b);
            long double sql = ceil(sqrt(L));
            long double sqr = floor(sqrt(R));
            ans += (ull)(sqr - sql + 1);
        }
    }
    cout << ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tt = 1;
    while (tt--) {
        solve();
        cout << '\n';
    }
    return 0;
}