#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int x,count1=0,count0=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==1) count1++;
        else count0++;
 
    }
     if(count1>=count0) cout<<"Bessie
";
     else cout<<"Elsie
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