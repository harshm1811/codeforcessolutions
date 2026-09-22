#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        v[x]++;
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        v[x]++;
    }
    int flag=1;
    for(int i=1;i<=n;i++){
        if(v[i]==0){
            flag=0;
            break;
        }
    }
    if(flag) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   
        solve();
    
    return 0;
}