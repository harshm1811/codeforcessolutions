#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<vector<int>> v(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        for(int j=0;j<x;j++){
            int y;
            cin>>y;
            v[i].push_back(y);
        }
 
    }
    vector<int> first;
    vector<int> second;
 
    for(int i=0;i<n;i++){
        sort(v[i].begin(),v[i].end());
        first.push_back(v[i][0]);
        second.push_back(v[i][1]);
    }
    sort(first.begin(),first.end());
    sort(second.begin(),second.end());
 
   long long sum=0;
    sum+=first[0];
    for(int i=1;i<second.size();i++){
        sum+=second[i];
    }
 
    cout<<sum<<nl;
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