#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    int m;
    cin >> n >> m;
    map<int, int> c;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c[x] = 1;
    }
    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        cout << (c[x] ? "YES\n" : "NO\n");
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