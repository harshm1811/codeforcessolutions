#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    int count=0;
    for(char c:s){
        if(c=='#'){
            count++;
            ans=max(ans,count);
        }else{
            count=0;
        }
    }
    if(ans%2==0)
    cout<<(ans/2)<<nl;
    else
    cout<<(ans/2)+1<<nl;
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