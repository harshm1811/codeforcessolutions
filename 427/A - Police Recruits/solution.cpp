#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n;
    cin>>n;
    int police=0,crime=0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(police<=0){
            if(v[i]==-1){
                crime++;
            }else{
                police+=v[i];
            }
        }else{
            if(v[i]==-1){
                police--;
            }else{
                police+=v[i];
            }
        }
    }
    cout<<crime;
 
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t=1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}