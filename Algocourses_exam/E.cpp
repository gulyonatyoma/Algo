#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, int> cnt;
    int l = 0, r = 0;
    int ans = 1e18;
    int bl = 0, br = 0;
    int un = 0;
    while (r < n) {
        if (cnt[a[r]] == 0) {
            un++;
        }
        cnt[a[r]]++;
        r++;
        while (un == k) {
            if (r - l < ans) {
                ans = r - l;
                bl = l;
                br = r - 1;
            }
            cnt[a[l]]--;
            if (cnt[a[l]] == 0) {
                un--;
            }
            l++;
        }
    }
    cout << bl + 1 << ' ' << br + 1;
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