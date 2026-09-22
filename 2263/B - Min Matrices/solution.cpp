#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define nl '
'
 
void solve() {
    int n,k,i,j;
    cin>>n>>k;
    vector<vector<int>> a(n,vector<int>(n));
 
    if(k<n||k>=2*n) cout<<-1<<"
";
    else{
        if(k==n){
            int num=1;
            int fill=k+1;
            for(int i=0;i<k;i++){
                for(int j=0;j<k;j++){
                    if(i==j){
                        a[i][j]=num;
                        num++;
                    }else{
                        a[i][j]=fill;
                        fill++;
                    }
                }
            }
        }
        else{
            int extra=k-n;
            int num=1;
            int fill=k+1;
            int shared=2*n-k;
 
            for(i=0;i<shared;i++){
                for(j=0;j<shared;j++){
                    if(i==j){
                        a[i][j]=num;
                        num++;
                    }
                }
            }
 
            for(i=shared;i<n;i++){
                a[i][0]=num;
                num++;
            }
 
            for(j=shared;j<n;j++){
                a[0][j]=num;
                num++;
            }
 
            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    if(a[i][j]==0){
                        a[i][j]=fill;
                        fill++;
                    }
                }
            }
        }
 
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<nl;
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}