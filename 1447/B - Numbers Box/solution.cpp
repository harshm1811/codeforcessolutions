#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,m;
    cin>>n>>m;
    ll sum=0;
    int neg=0;
    ll mn=101;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll x;
            cin>>x;
            if(x<0) neg++;
            sum+=abs(x);
            mn=min(mn,abs(x));
        }
    }
    if(neg%2==0){
        cout<<sum<<nl;
    }else{
        cout<<sum-2*mn<<nl;
    }
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