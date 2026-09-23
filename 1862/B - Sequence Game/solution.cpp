#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
 
    vector<int> b(n),a;
 
    for(int i=0;i<n;i++) cin>>b[i];
 
    a.push_back(b[0]);
 
    for(int i=1;i<n;i++) {
        if(b[i]>=b[i-1]) {
            a.push_back(b[i]);
        }
        else {
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
 
    cout<<a.size()<<nl;
 
    for(auto it:a) cout<<it<<" ";
    cout<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
 
    while(t--) {
        solve();
    }
 
    return 0;
}