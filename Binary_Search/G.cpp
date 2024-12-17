#include <bits/stdc++.h>

using namespace std;

#define ld long double
#define int long long

void solve() {
    int n, k; cin >> n >> k;
    vector<ld> a(n);
    for (auto& it : a) {
        cin >> it;
    }
    sort(a.rbegin(), a.rend());
    ld l = 0, r = a[0];
    while (r - l > 0.000000001) {
        ld m = (r + l) / 2.0;
        int cnt = 0;
        for (auto it : a) {
            cnt += (int)it / m;
        }
        if (cnt < k) {
            r = m;
        } else {
            l = m;
        }
    }
    cout << (int)r;
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