#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
 
    vector<ll> p(n+1,0);
    for(int i=0;i<n;i++){
        p[i+1]=p[i]+v[i];
    }
    ll count=0;
    map<ll,ll> mp;
    for(int r=0;r<=n;r++){
        if(r-k-1>=0)
        mp[p[r-k-1]%k]++;
 
        count+=mp[p[r]%k];
    }
 
    cout<<count<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--) solve();
 
    return 0;
}