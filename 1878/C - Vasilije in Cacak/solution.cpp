#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k,x;
        cin>>n>>k>>x;
        if(x>=k*(k+1)/2 && x<=n*k-k*k/2+k/2){
            cout<<"YES"<<'
';
        }else{
            cout<<"NO"<<'
';
        }
    }
    return 0;
}