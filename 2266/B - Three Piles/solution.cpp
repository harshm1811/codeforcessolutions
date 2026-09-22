#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    long long a,b,c;
    cin>>a>>b>>c;
    if(a>=b) cout<<a+c-b<<nl;
    else{
        if((a+c-b)>=(b-a)){
            cout<<a+c-b<<nl;
        }
        else{
            cout<<b-a<<nl;
        }
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