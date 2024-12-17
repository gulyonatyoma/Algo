#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++) {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        while (r - l > 1) {
            int m = (r + l) / 2;
            if (a[m] > x) {
                r = m;
            } else {
                l = m;
            }
        }
        if (a[r] - x < x - a[l]) {
            cout << a[r] << '\n';
        } else {
            cout << a[l] << '\n';
        }
    }
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