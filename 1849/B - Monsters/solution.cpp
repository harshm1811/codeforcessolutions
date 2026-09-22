#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '
'
void solve(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]={x,i+1};
    }
    for(int i=0;i<n;i++){
        v[i].first%=k;
        if(v[i].first==0)v[i].first=k;
    }
    sort(v.begin(),v.end(),[](auto&a,auto&b){
        if(a.first!=b.first)return a.first>b.first;
        return a.second<b.second;
    });
    for(auto it:v)cout<<it.second<<" ";
    cout<<nl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)solve();
    return 0;
}