#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v[i]={x,i+1};
    }
    vector<int> pos;
    for(int i=0;i<n;i++){
        if(v[i].first!=v[i].second){
            pos.push_back(v[i].second);
        }
    }
    bool count=1;
    for(int i=0;i<pos.size();i++){
        if(v[pos[i]-1].first!=pos[pos.size()-i-1]) count=0;
    }
    if(count) cout<<"yes
";
    else cout<<"no
";
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