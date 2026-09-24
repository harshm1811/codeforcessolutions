#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,k;
    cin>>n>>k;
    vector<int> v(n*k+1);
        long long sum1=0;
    for(int i=1;i<=n*k;i++){
        cin>>v[i];
    }
   if(n%2!=0){
    int b=(((n)/2))*k;
     
    
        for(int i=b+1;i<n*k+1;i+=((n)/2)+1){
            sum1+=v[i];
        }
    }else{
         int b=(((n)/2)-1)*k;
        
    
        for(int i=b+1;i<n*k+1;i+=((n)/2)+1){
            sum1+=v[i];
        }
 
    }
    
    
   
    cout<<sum1<<nl;
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