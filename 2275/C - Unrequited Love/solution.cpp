#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<ll> a(n);
    for(auto &x:a){
        cin>>x;
    }
    vector<ll> v;
    for(int i=0;i<=n-5;i++){
        v.push_back(a[i]+a[i+2]-a[i+4]);
    }
    map<ll,ll> mp;
    ll ans=0;
 
     for(int i=0;i<v.size();i++){
        ans+=mp[v[i]];
        if(i>=2&&v[i-2]==v[i])
            ans--;
        if(i>=4&&v[i-4]==v[i])
            ans--;
        mp[v[i]]++;
    }
 
    cout<<ans<<nl;
 
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}