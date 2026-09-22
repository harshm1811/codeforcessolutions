#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        if(n<=10){
            cout<<n<<'
';
        }else if(n<=100){
            cout<<9+n/10<<'
';
        }else if(n<=1000){
            cout<<18+n/100<<'
';
        }else if(n<=10000){
            cout<<27+n/1000<<'
';
        }else if(n<=100000){
            cout<<36+n/10000<<'
';
        }else if(n<=1000000){
            cout<<45+n/100000<<'
';
        }
    }
    return 0;
}