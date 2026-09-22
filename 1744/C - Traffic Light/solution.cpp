#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve(){
    int n,min=0,ans=0,count=0;
    char c;
    cin>>n>>c;
    string s;
    cin>>s;
    s=s+s;
    int l=0;
    if(c=='g'){
        ans=0;
    }else{
    while(l<2*n){
        if(s[l]==c){
            while(s[l]!='g'&&l<2*n){
                l++;
                count++;
            }
            ans=max(count,ans);
            count=0;
        }else{
            l++;
        }
    }
    }
    cout<<ans<<'
';
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