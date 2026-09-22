#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
   
 
void solve(){
    int n,l;
    cin>>n>>l;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    vector <double> c(n+1);
    for(int i=0;i<n-1;i++){
        c[i]=(double)(a[i+1]-a[i])/2;
    }
    c[n-1]=a[0]-0;
    c[n]=l-a[n-1];
    cout << fixed << setprecision(10) << *max_element(c.begin(), c.end());;
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