#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,t;
    cin>>n>>t;
 
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
 
    int l=0;
    int sum=0;
    int ans=0;
 
    for(int r=0;r<n;r++){
        sum+=v[r];
 
        while(sum>t && l<=r){
            sum-=v[l];
            l++;
        }
 
        ans=max(ans,r-l+1);
    }
 
    cout<<ans<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solve();
 
    return 0;
}