#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n; cin >> n;
    vector<string> a(n);

    set<int> ans;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        int pref = 0;
        for (auto it : a[i]) {
            if (it == '1') {
                pref++;
            }
        }
        ans.insert(pref);
    }
    if (ans.size() <= 2) {
        cout << "SQUARE";
    } else {
        cout << "TRIANGLE";
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;

    while (test--) {
        solve();
        cout << '\n';
    }

    return 0;
}