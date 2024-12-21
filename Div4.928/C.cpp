#include <bits/stdc++.h>

using namespace std;

#define int long long

// void solve(int n) {
    
// }

vector<int> precalc() {
    vector<int> cnt(1e6, 0);
    for (int i = 1; i <= 1e6 - 1; i++) {
        int m = i;
        int sum = 0;
        while (m > 0) {
            sum += (m % 10);
            m /= 10;
        }
        cnt[i] = cnt[i - 1] + sum;
    }

    return cnt;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test = 1;
    cin >> test;

    vector<int> pref = precalc();

    while (test--) {
        int n; cin >> n;
        cout << pref[n];
        cout << '\n';
    }

    return 0;
}