#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int sum=0;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin>>v[i];
        sum+=v[i];
    }
    int sum1=0;
    int count=0;
    sort(v.begin(),v.end()); 
    for(int i=n-1;i>=0;i--){
        sum1+=v[i];
        count++;
        if(sum1>sum/2) break;
    }
    cout<<count<<nl;
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