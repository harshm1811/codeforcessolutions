#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    cin>>v[i];
    int count=1;
    int ans=1;
    for(int i=0;i<n-1;i++){
        if(v[i]<=v[i+1]){
            count++;
        }else{
            count=1;
        }
        ans=max(ans,count);
    }
    cout<<ans;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}