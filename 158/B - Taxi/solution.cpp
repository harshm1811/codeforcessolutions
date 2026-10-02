#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<int> s(n);
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        if(s[i]==1) cnt1++;
        if(s[i]==2) cnt2++;
        if(s[i]==3) cnt3++;
        if(s[i]==4) cnt4++;
    }
    int ans=0;
    ans+=cnt4;
    if(cnt1>cnt3){
        ans+=cnt3;
        cnt1-=cnt3;
        ans+=cnt2/2;
        if(cnt2%2){
            ans++;
            cnt1-=min(cnt1,2);
        }
        ans+=(cnt1+3)/4;
    }else if(cnt3>cnt1){
        ans+=cnt1;
        cnt3-=cnt1;
        ans+=cnt3;
        ans+=cnt2/2;
        if(cnt2%2) ans++;
    }else{
        ans+=cnt1;
        ans+=cnt2/2;
        if(cnt2%2) ans++;
    }
    cout<<ans<<nl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}