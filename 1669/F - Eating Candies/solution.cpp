#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
 
    vector<int> w(n);
    for(int i=0;i<n;i++) cin>>w[i];
 
    int l=0;
    int r=n-1;
    int sum1=0;
    int sum2=0;
    int ans=0;
 
    while(l<=r){
        if(sum1<=sum2){
            sum1+=w[l];
            l++;
        }
        else{
            sum2+=w[r];
            r--;
        }
 
        if(sum1==sum2){
            ans=max(ans,l+(n-1-r));
        }
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