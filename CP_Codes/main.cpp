#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

/*
Definition: dp[n] =
Output:
Transitions:
    max for all cases.
*/

void solve() {
    int t, a, b; cin >> t >> a >> b;
    int pos[t + 10] {};
    pos[0] = 1;
    for (int i = 0; i <= t; i++) {
        if (pos[i]) {
            if (i + a <= t) pos[i + a] = 1;
            if (i + b <= t) pos[i + b] = 1;
        }
    }
    int dp[t + 10] {};
    dp[0] = 0;
    for (int i = 1; i <= t; i++) {
        dp[i] = dp[i - 1];
        if (pos[i]) {
            dp[i] = i;
        }
    }
    int mx = 0;
    for (int i = 1; i <= t; i++) {
        if (pos[i]) {
            mx = max(mx, dp[i]);
            int x = i / 2;
            int rem = t - x;
            mx = max(mx, x + dp[rem]);
        }
    }
    cout << mx << endl;

}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll tcase = 1;
    // cin>>tcase;
    for (ll tc = 1; tc <= tcase; tc++) {
        // cout<<"Case #"<<tc<<": ";
        solve();
    }

}
