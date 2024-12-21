#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int q; cin >> q;
    deque<int> a, pref;
    a.push_back(0);
    pref.push_back(0);
    for (int i = 0; i < q; i++) {
        char c; cin >> c;
        if (c == '+') {
            int x; cin >> x;
            a.push_back(x);
            pref.push_back(pref.back() + x);
        } else if (c == '-') {
            cout << a.back() << '\n';
            a.pop_back();
            pref.pop_back();
        } else {
            int k; cin >> k;
            cout << pref.back() - pref[pref.size() - 1 - k] << '\n';
        }
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