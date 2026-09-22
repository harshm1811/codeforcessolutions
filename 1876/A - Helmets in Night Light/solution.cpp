#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    long long n,p;
    cin>>n>>p;
    vector<pair<long long , long long>> v(n);
    vector<long long> a(n),b(n);
    for(int i=0;i<n;i++) cin>>a[i];
  for(int i=0;i<n;i++) cin>>b[i];
  for(int i=0;i<n;i++) v[i]={b[i],a[i]};
  sort(v.begin(),v.end());
 
 long long cost=p;
  long long shared=1;
 
  for(auto it:v)
  {
    long long sharingcost=it.first;
    long long numberofshares=it.second;
 
    if(sharingcost>=p)
    break;
    if(shared+numberofshares>n){
        cost+=(n-shared)*sharingcost;
        shared=n;
        break;
    }else{
        cost+=sharingcost*numberofshares;
        shared+=numberofshares; 
    }}
    cost+=(n-shared)*p;
    cout<<cost<<"
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