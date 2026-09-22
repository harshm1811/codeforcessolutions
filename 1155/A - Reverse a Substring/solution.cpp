#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    int x,y;
    cin>>n;
    string s;
    cin>>s;
    bool available=false;
    for(int i=0;i<n-1;i++){
            if(s[i]>s[i+1]){
                available = true;
                 x=i;
                 y=i+1;
                break;
            }
        
    }
    if(available) cout<<"YES"<<"
"<<x+1<<" "<<y+1;
    else cout<<"NO";
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
        solve();
    
    return 0;
}