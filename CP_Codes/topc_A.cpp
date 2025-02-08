#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin >> n;
    vector<int> p(n + 1), q(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> q[i];
    }
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        ans[q[i]] = q[p[i]];
    }
    for (int i = 1; i <= n; i++) {
        cout << ans[i] << " ";
    } cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int tcase = 1;
    //cin>>tcase;
    for (int tc = 1; tc <= tcase; tc++) {
        // cout<<"Case #"<<tc<<": ";
        solve();
    }
}
