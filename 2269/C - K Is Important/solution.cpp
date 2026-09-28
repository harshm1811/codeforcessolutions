#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<ll> v(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
 
    int l=k;
    int r=n-k+1;
    ll ans=0;
 
    while(n>=k){
        while(v[l]==0) l++;
        while(v[r]==0) r--;
 
        int oldl=l;
        int oldr=r;
 
        if(v[l]>=v[r]){
            ans+=v[l];
            v[l]=0;
 
            l++;
            while(l<=n&&v[l]==0) l++;
 
            if(oldl>oldr){
                r--;
                while(r>=1&&v[r]==0) r--;
            }
        }else{
            ans+=v[r];
            v[r]=0;
 
            r--;
            while(r>=1&&v[r]==0) r--;
 
            if(oldr<oldl){
                l++;
                while(l<=n&&v[l]==0) l++;
            }
        }
 
        n--;
    }
 
    cout<<ans<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}