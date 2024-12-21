#include <bits/stdc++.h>

using namespace std;

#define int long long

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a + b);
}

int lcm(int a, int b) {
    int q = gcd(a, b);
    return a / q * b;
}

void solve() {
    int n, k; cin >> n >> k;
    cout << lcm(n, k);
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