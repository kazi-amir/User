#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#include<functional>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef pair<int,int> pi;
typedef vector<int> vi;
#define int unsigned long long
#define endl "\n"

void oj(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt","w", stdout);
#endif
}
void merge(vi &vct, int l, int m, int r){
    int left = m-l+1, right = r-m;
    vi lv(left), rv(right);
    for(int i = 0; i<left; i++) lv[i] = vct[l+i];
    for(int i = 0; i<right; i++) rv[i] = vct[m+1+i];
    int i = 0, j = 0, to = l;
    while(i<left && j<right){
        if(lv[i]<=rv[j]){ vct[to] = lv[i]; i++; }
        else{ vct[to] = rv[j]; j++; } 
        to++;
    }
    while(i<left){ vct[to] = lv[i]; i++; to++; }
    while(j<right){ vct[to] = rv[j]; j++; to++; }
}
void merge_sort(vi &vct, int l, int r){
    if(r<=l) return; 
    int m = l+(r-l)/2;
    merge_sort(vct, l, m); merge_sort(vct, m+1, r);
    merge(vct, l,m,r);
}
void print_vct(vi &vct){
    for(int i = 0; i<vct.size(); i++){
        cout<<vct[i]<<" ";
    }
    cout<<endl;
}
void solution(){
    int n; cin>>n;
    vi vct(n);
    for(int i = 0; i<n; i++){
        cin>>vct[i];
    }
    merge_sort(vct, 0, n-1);
    print_vct(vct);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    oj();

    int tcase = 1;
    //cin>>tcase;
    for(int tc = 1; tc<=tcase; tc++){
        //cout<<"Case "<<tc<<": ";
        solution();
    }
}