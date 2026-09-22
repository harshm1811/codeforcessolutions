#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
void solve() {
    ll n,x,y;
    cin>>n>>x>>y;
    ll g = gcd(x,y);
    bool possible = true;
    for(int i =1;i<=n;i++){
        int x;
        cin>>x;
        if(i%g!=x%g){
            possible = false;
        }
    
    }
    if(possible){
        cout<<"YES
";
    }else{
        cout<<"NO
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