#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"First"<<nl;
    }else if(a<b){
        cout<<"Second"<<nl;
    }else{
        if(c%2==0){
            cout<<"Second"<<nl;
        }else{
            cout<<"First"<<nl;
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