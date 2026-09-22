#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
 
 
void solve() {
    
        ll x;
        cin>>x;
        int dig =0;
       ll temp = x;
       while(temp>0){
        dig++;
        temp/=10;
       }
       ll y =1;
       for(int i =0;i<dig;i++){
        y*=10;
       }
       y+=1;
       cout<<y<<nl;
 
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