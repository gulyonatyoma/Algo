#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int q; cin >> q;
    deque<int> a;
    multiset<int> b;
    for (int i = 0; i < q; i++) {
        int x; cin >> x;
        if (x == 1) {
            int u; cin >> u;
            b.insert(u);
            a.push_back(u);
        } else if (x == 2) {
            cout << a.back() << '\n';
            b.erase(b.find(a.back()));
            a.pop_back();
        } else if (x == 3) {
            int u; cin >> u;
            a.push_front(u);
            b.insert(u);
        } else if (x == 4) {
            cout << a.front() << '\n';
            b.erase(b.find(a.front()));
            a.pop_front();
        } else {
            cout << *b.begin() << '\n';
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