#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    int a=-1,b=-1,c=-1;
    for(int i=1;i<n-1;i++){
        if(v[i]>v[i-1]&&v[i]>v[i+1]){
            a=i;
            b=i-1;
            c=i+1;
            break;
        }
    }
    if(a==-1) cout<<"NO"<<nl;
    else{
        cout<<"YES"<<nl;
        cout<<b+1<<" "<<a+1<<" "<<c+1<<nl;
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}