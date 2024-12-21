#include <bits/stdc++.h>

using namespace std;

#define int long long

int invert(int n) {
    string res = "";
    for (int i = 0; i <= 30; i++) {
        if (n & (1 << i)) {
            res = '0' + res;
        } else {
            res = '1' + res;
        }
    }
    reverse(res.begin(), res.end());
    int ret = 0;
    for (int i = 0; i < res.size(); i++) {
        ret += (res[i] - '0') * (1 << i);
    }
    return ret;
}

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    map<unsigned int, int> cnt;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cnt[a[i]]++;
    }
    int ans = 0;
    map<unsigned int, int> used;
    for (int i = 0; i < n; i++) {
        used[a[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (used[a[i]]) {
            used[a[i]]--;
            ans++;
            if (used[invert(a[i])]) {
                used[invert(a[i])]--;
            }
        }
    }
    cout << ans;
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