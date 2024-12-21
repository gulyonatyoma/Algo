#include <bits/stdc++.h>

using namespace std;

#define int long long

void solve() {
    int n; cin >> n;
    vector<pair<long double, pair<long double, string>>> a;
    for (int i = 0; i < n; i++) {
        long double x; cin >> x;
        int c = x;
        string s; cin >> s;
        int val = x;

        if (s.size() == 1) {
            if (s[0] == 'p') {
                x *= 16380;
            } else if (s[0] == 't') {
                x *= 1e6;
            }
        } else {
            if (s[0] == 'm') {
                x *= 1e-3;
            } else if (s[0] == 'k') {
                x *= 1e3;
            } else if (s[0] == 'M') {
                x *= 1e6;
            } else if (s[0] == 'G') {
                x *= 1e9;
            }

            if (s[1] == 'p') {
                x *= 16380;
            } else if (s[1] == 't') {
                x *= 1e6;
            }
        }
        a.push_back({x, {c, to_string(c) + " " + s}});
    }
    sort(a.begin(), a.end(), [](pair<long double, pair<long double, string>> u, pair<long double, pair<long double, string>> v) {
        if (abs(u.first - v.first) < 1e-12) {
            return u.second.second < v.second.second;
        } else {
            return (u.first + 1e-12 < v.first);
        }
    });
    for (auto it : a) {
        cout << it.second.second << '\n';
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