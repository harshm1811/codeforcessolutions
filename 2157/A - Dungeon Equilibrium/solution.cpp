#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int a[n];
    int mx=0;
    vector<int> c(101,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[a[i]]++;
        if(a[i]>mx) mx=a[i];
    }
    int ans=0;
    for(int i=0;i<=mx;i++){
        int diff=(c[i]-i);
      
            if(diff>=0){
                ans+=diff;
            }else{
                ans+=c[i];
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