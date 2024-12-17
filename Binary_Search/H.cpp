#include <bits/stdc++.h>

using namespace std;

bool check(int &dist, vector<int> mas, int kolvo) {
    int cnt = 1;
    int last = mas[0];
    for (int i = 1; i < mas.size(); i++) {
        if (mas[i] - last >= dist) {
            last = mas[i];
            cnt += 1;
        }
    }
    return (cnt >= kolvo);
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = 1e9;
    while (r - l > 1) {
        int m = (r + l) / 2;
        if (check(m, a, k)) {
            l = m;
        } else {
            r = m;
        }
    }
    cout << l;
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