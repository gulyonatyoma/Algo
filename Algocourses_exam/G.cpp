#include <bits/stdc++.h>

using namespace std;

#define int unsigned long long

int abs(int x) {
    if (x > 0) {
        return x;
    } else {
        return x * -1;
    }
}

string int128_to_string(__int128_t value) {
    string result;
    bool is_negative = value < 0;

    if (value == 0) {
        return "0";
    }

    while (value != 0) {
        int digit = value % 10;
        result += '0' + abs(digit);
        value /= 10;
    }

    if (is_negative) {
        result += '-';
    }

    reverse(result.begin(), result.end());
    return result;
}

__int128_t string_to_int128(const string& str) {
    __int128_t result = 0;
    bool is_negative = false;
    int start = 0;

    // Проверяем знак числа
    if (str[0] == '-') {
        is_negative = true;
        start = 1;
    } else if (str[0] == '+') {
        start = 1;
    }
    for (int i = start; i < str.size(); ++i) {
        result = result * 10 + (str[i] - '0');
    }

    return is_negative ? -result : result;
}

ostream& operator<<(std::ostream& os, __int128_t value) {
    os << int128_to_string(value);
    return os;
}

istream& operator>>(std::istream& is, __int128_t& value) {
    std::string input;
    is >> input;

    value = string_to_int128(input);

    return is;
}

void solve() {
    __int128_t a, k, b, m, x;
    cin >> a >> k >> b >> m >> x;
    __int128_t l = -1, r = 1e24;
    while (r - l > 1) {
        __int128_t mid = (r + l) / 2;
        __int128_t mid1 = mid, mid2 = mid;
        mid1 -= mid / k;
        mid2 -= mid / m;
        __int128_t ans = mid1 * a + mid2 * b;
        if (ans >= x) {
            r = mid;
        } else {
            l = mid;
        }
    }
    cout << r;
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