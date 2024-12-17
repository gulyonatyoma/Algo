#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    map<int, int> c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c[x] += 1;
    }
    int m; cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cout << c[x] << ' ';
    }
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