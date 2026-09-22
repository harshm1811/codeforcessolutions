#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    ll n,k;
    cin>>n>>k;
 
    ll m=(n+k-1)/k;
    ll t=m*k;
 
    cout<<(t+n-1)/n<<nl;
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