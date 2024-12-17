#include<bits/stdc++.h>
#define endl "\n"
#define fi first
#define se second
#define pb push_back
#define sz(x) (int)x.size()

using namespace std;
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
ll n, a, b, w, h;
bool Try(ll x) {
    ll curA = a + x * 2;
    ll curB = b + x * 2;
    ll cnt = (w / curA) * (h / curB);
    return cnt >= n;
}
ll dih() {
    ll l = 0, r = max(w, h) + 1;
    while (r - l > 1) {
        ll m = (l + r) >> 1;
        if (Try(m))
            l = m;
        else
            r = m;
    }
    return l;
}
int main() {
    cin >> n >> a >> b >> w >> h;
    ll q = dih();
    swap(a, b);
    cout << max(q, dih()) << endl;
    return 0;
}
