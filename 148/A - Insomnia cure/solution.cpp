#include <iostream>
using namespace std;
 
int main() {
    int l,k,m,n,d;
    cin>>l>>k>>m>>n>>d;
    int ans=0;
    for(int i = 1 ; i<=d ; i++){
       if(i%l==0 || i%k==0 || i%m==0 || i%n==0 ) ans++; 
    }
    cout<<ans;
    return 0;
}