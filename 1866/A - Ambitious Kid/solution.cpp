#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(abs(x)<min){
            min=abs(x);
        }
    }
 
    cout<<min<<nl;
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