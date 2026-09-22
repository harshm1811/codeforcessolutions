#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
   vector<int> a(n),b(n),c(n);
   for(auto &x:a) cin>>x;
   for(auto &x:b) cin>>x;
   for(auto &x:c) cin>>x;
 
   vector<pair<int,int>> A(n),B(n),C(n);
   for(int i=0;i<n;i++){
   A.push_back({a[i],i});
   B.push_back({b[i],i});
   C.push_back({c[i],i});
   }
   sort(A.rbegin(),A.rend());
   sort(B.rbegin(),B.rend());
   sort(C.rbegin(),C.rend());
   int ans=0;
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<3;k++){
            if(A[i].second!=B[j].second && B[j].second!=C[k].second && A[i].second!=C[k].second)
            ans=max(ans,A[i].first+B[j].first+C[k].first);
        }
 
    }
   }
    cout<<ans<<"
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