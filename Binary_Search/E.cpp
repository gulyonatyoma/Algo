#include <bits/stdc++.h>

using namespace std;

#define ld long double

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a < 0) {
        a = -a;
        b = -b;
        c = -c;
        d = -d;
    }
    ld l = -2000, r = 2000;
    while (r - l > 1e-12) {
        ld m = (r + l) / 2.0;
        if (a * m * m * m + b * m * m + c * m + d > 0) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << fixed << setprecision(15) << l;
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