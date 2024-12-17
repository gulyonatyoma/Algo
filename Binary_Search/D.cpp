#include <bits/stdc++.h>

using namespace std;

void solve() {
    long double c;
    cin >> c;
    long double EPS = 1e-12;
    long double l = 0.0, r = 1e12;
    while (r - l > 1e-12) {
        long double m = (r + l) / 2.0;
        if (m * m * m * m + m > c) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << fixed << setprecision(10) << l * l;
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