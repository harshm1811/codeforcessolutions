#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    vector<int> v;
    for(int i=2;i*i<=x;i++){
        if(x%i==0){
        v.push_back(i);
        if(i!=x/i) v.push_back(x/i);
        }
    }
    if(x>1) v.push_back(x);
 
    ll mx=0;
 
    for(int g:v){
        ll ans=0;
        for(int i=0;i<n;i++){
            if(a[i]%g==0){
                ans+=a[i];
            }
        }
        mx=max(mx,ans);
    }
 
    cout<<mx<<nl;
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