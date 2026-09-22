#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    ll sum=0;
    bool possible = true;
    for(int i=1;i<=n;i++){
        ll x;
        cin>>x;
        sum+=x;
        if( sum<((1LL*i*(i+1))/2)){
            possible = false;
        }
    }
    if(possible) {cout<<"YES
";}
    else {cout<<"NO
";
    }
    
 
 
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