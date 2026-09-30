#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    ll n;
    cin>>n;
    string s;
    cin>>s;
     unordered_set<char> st;
     vector<ll> p(n+1,0);
     vector<ll> sf(n+1,0);
     for(ll i=1;i<=n;i++){
        st.insert(s[i-1]);
        p[i]=st.size();
     }
     st.clear();
     for(ll i=n;i>=1;i--){
        st.insert(s[i-1]);
        sf[i]=st.size();
     }
     ll ans=0;
     for(ll i=0;i<n;i++){
        ans=max(ans,p[i]+sf[i+1]);
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