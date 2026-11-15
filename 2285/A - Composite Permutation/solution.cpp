#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '
'
 
void solve(){
    int n;
    cin>>n;
    if(n<4){
        cout<<-1<<nl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(i==1)cout<<4<<" ";
        else if(i==4)cout<<1<<" ";
        else cout<<i<<" ";
    }
    cout<<nl;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}