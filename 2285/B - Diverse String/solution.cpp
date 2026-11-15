#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,k;
    cin>>n>>k;
 
    string s;
    cin>>s;
 
    int o=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') o++;
    }
 
    int mn=max(0,o-k);
    int mx=min(n,o+k);
 
    ll a=1LL+1LL*mn*(mn+1)/2+1LL*(n-mn)*(n-mn+1)/2;
    ll b=1LL+1LL*mx*(mx+1)/2+1LL*(n-mx)*(n-mx+1)/2;
 
    cout<<max(a,b)<<nl;
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