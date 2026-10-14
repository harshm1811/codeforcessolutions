#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int a,b;
    cin>>a>>b;
    if(a<=b){
        cout<<-1<<nl;
        return;
    }
    if(a>=2*b){
        cout<<b<<nl;
    }
    else{
        cout<<a-b<<nl;
    }
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