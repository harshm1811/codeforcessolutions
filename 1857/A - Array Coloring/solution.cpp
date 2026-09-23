#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        sum+=x;
    }
    if(sum%2==0) cout<<"yes"<<nl;
    else cout<<"no"<<nl;
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