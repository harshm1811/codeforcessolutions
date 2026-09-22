#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];
    int count=1;
    map<int,int> ma,mb;
    for(int i=0;i<n;i++){
        if(i>0&&a[i]==a[i-1]){
            count++;
        }else{
            count=1;
        }
        ma[a[i]]=max(ma[a[i]],count);
    }
    count=1;
    for(int i=0;i<n;i++){
        if(i>0&&b[i]==b[i-1]){
            count++;
        }else{
            count=1;
        }
        mb[b[i]]=max(mb[b[i]],count);
    }
    int ans=0;
    for(auto it:ma){
        int x=it.first;
        ans=max(ans,it.second+mb[x]);
    }
    for(auto it:mb){
        int x=it.first;
        ans=max(ans,it.second+ma[x]);
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