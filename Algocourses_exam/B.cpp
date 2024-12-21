#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, m; cin >> n >> m;
    vector<vector<int>> dp(10, vector<int>(10, 0));
    dp[m][n] = 1;
    for (int i = 1; i <= 8; i++) {
        for (int j = 1; j <= 8; j++) {
            dp[i][j] += dp[i - 1][j - 1] + dp[i - 1][j + 1];
        }
    }
    int ans = 0;
    for (int i = 1; i <= 8; i++) {
        ans += dp[8][i];
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