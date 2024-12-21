#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> a;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        a.push(x);
    }
    int ans = 0;
    while (a.size() > 1) {
        int u = a.top();
        a.pop();
        int v = a.top();
        a.pop();
        ans += u + v;
        a.push(u + v);
    }
    cout << ans;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    while (test--) {
        solve();
        cout << '\n';
    }

    return 0;
}