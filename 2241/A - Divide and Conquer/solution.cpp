#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int x,y;
    cin>>x>>y;
  if(x>=y and x%y==0){
    cout<<"YES"<<nl;
  }
  else cout<<"NO"<<nl;
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