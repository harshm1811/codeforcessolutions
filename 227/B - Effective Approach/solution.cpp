#include <iostream>
#include<vector>
using namespace std;
 
int main() {
    long long n,m;
    long long sum=0;
    cin>>n;
    long long x;
    vector<long long> a(n+1);
    for(int i = 0 ; i<n ; i++){
        cin>>x;
        a[x]=i;
    }
    cin>>m;
    
    for(int j=0 ; j<m ; j++ )
    {   int x;
        cin>>x;
        
            sum+=a[x]+1;
    }
    
 
 cout<<sum<<" "<<m*(n+1)-sum;
   
    return 0;
    }