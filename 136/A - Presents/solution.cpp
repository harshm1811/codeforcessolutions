#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
   
    return 0;
}