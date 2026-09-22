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
 
    int count0=0;
    int count1=0;
 
    if(s[0]=='1'){
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                count0++;
        }
        cout<<count0<<nl;
        return;
    }
 
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            count0++;
    }
 
    int ans=count0;
 
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            count0--;
        else
            count1++;
 
        ans=min(ans,count1+count0);
    }
 
    cout<<ans<<nl;
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