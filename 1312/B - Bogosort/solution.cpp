#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
 
    while(true){
        vector<pair<int,int>> p;
        for(int i=0;i<n;i++){
            p.push_back({i-a[i],i});
        }
 
        sort(p.begin(),p.end());
 
        bool good=true;
 
        for(int i=0;i<n-1;i++){
            if(p[i].first==p[i+1].first){
                swap(a[p[i].second],a[p[i+1].second]);
                good=false;
                break;
            }
        }
 
        if(good) break;
    }
 
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<nl;
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