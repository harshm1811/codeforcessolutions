#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    ll x,y,k;
    cin>>x>>y>>k;
    ll target=(y+1)*k;
    ll trades=(target-2)/(x-1)+1;
    trades+=k;
    cout<<trades<<nl;
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