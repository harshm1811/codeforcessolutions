#include <iostream>
 
using namespace std;
 
int main(){
    int t,n,c1,ans;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        int a[n];
        c1=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                ans++;
            }
            else if(a[i]==-1){
                c1++;
            }
        }
        if(c1%2!=0){
            ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}