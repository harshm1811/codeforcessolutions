#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,m;
    
    cin>>n>>m;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    priority_queue<int> pq;
    ll sum=0;
    ll mx=LLONG_MIN;
 
    for(int i=0;i<n;i++){
        if(pq.size()==m-1){
            mx=max(mx,1LL*m*v[i]-sum);
        }
 
        pq.push(v[i]);
        sum+=v[i];
 
        if(pq.size()>m-1){
            sum-=pq.top();
            pq.pop();
        }
    }
    cout<<mx<<nl;
    
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