#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

#define ll long long
#define endl '\n'


const int base = 1000000000;
const int base_digits = 9;

struct bigint {
    vector<int> a;
    int sign;

    int size() {
        if (a.empty()) return 0;
        int ans = (a.size() - 1) * base_digits;
        int ca = a.back();
        while (ca) {
            ans++;
            ca /= 10;
        }
        return ans;
    }

    bigint operator^(const bigint &v) {
        bigint ans = 1, a = *this, b = v;
        while (!b.isZero()) {
            if (b % 2)
                ans *= a;
            a *= a;
            b /= 2;
        }
        return ans;
    }

};


const int MAXN = 1e6 + 10;
int prime[MAXN];
vector<int> prm;
void sieve() {
    for (ll i = 3; i * i < MAXN; i += 2) {
        if (!prime[i]) {
            for (ll j = i * i; j < MAXN; j += i * 2) {
                prime[j] = 1;
            }
        }
    }
    prm.push_back(2);
    for (int i = 3; i < MAXN; i += 2) {
        if (!prime[i]) prm.push_back(i);
    }
}

void solve() {
    Bigint n; int m;
    while (cin >> n >> m && m) {
        int pos = 1, ans = -1;
        for (int i = 0; i < prm.size() && prm[i] < m; i++) {
            if (n % prm[i] == 0) {
                ans = prm[i];
                pos = 0; break;
            }
        }
        if (pos) cout << "GOOD\n";
        else cout << "BAD " << ans << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    sieve();

    ll tcase = 1;
    // cin>>tcase;
    for (ll tc = 1; tc <= tcase; tc++) {
        // cout<<"Case #"<<tc<<": ";
        solve();
    }
}
