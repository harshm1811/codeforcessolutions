#include <iostream>
#include <vector>
using namespace std;
 
int main()
{   
    int n;
    int d=0;
    cin>>n;
    
    vector<int> a(n),b(n),c(n);
 
    for ( int i = 0; i<n ; i++)
     {
      cin>>a[i]>>b[i]>>c[i];
     }
 
     for (int i = 0 ; i<n ; i++)
     {  
       if ( a[i] + b[i] + c[i] > 1)
        d++;
        
        
        }
 
        cout<<d;
        return 0;
}