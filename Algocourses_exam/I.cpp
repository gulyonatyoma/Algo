#include <bits/stdc++.h>

using namespace std;

#define int long long

bool rec(int n, vector<int> &ans, int cnt = 0) {
    if (cnt == 8) {
        return false;
    }
    int max_c = cbrt(n) + 1;
    for (int i = max_c; i >= 1; i--) {
        int c = i * i * i;
        if (c > n) {
            continue;
        }
        ans.push_back(i);
        if (c == n) {
            return true;
        }
        if (rec(n - c, ans, cnt + 1)) {
            return true;
        }
        ans.pop_back();
    }
    return false;
}

void solve() {
    int n; cin >> n;
    vector<int> ans;
    if (rec(n, ans)) {
        cout << ans.size() << '\n';
        for (auto it : ans) {
            cout << it << ' ';
        }
    } else {
        cout << 0;
    }
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