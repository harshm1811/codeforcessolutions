#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    vector<int>x(t),y(t),n(t),k(t);
    for ( int i = 0 ; i<t ; i++)
    {
        cin>>x[i]>>y[i]>>n[i];
 
    }
 
 
    int q = 0 ;
 
    for ( int i = 0 ; i<t ; i++)
      {  q=floor((n[i]-y[i])/x[i]);
         k[i]= x[i]*q + y[i]; }
    for ( int i = 0 ; i<t; i++)
    {
            cout << k[i] <<'
';
    }
   
}