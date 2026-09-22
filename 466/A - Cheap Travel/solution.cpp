#include <iostream>
using namespace std;
 
int main()
{
  int n,m,a,b;
  cin>>n>>m>>a>>b;
  int r=0;
  if (n==m)
    if ((m*a)>b)
        r= b;
        else
        r=m*a;
    else if (n>m)
       
        if ((m*a)>b)
            if (a>b)
            if (n%m==0)
            r= (n/m)*b;
            else
 
            r = b*(n+m-1)/m;
            else 
                r = (n-n%m)*b/m +(n%m)*a;
        else 
        r=n*a;
      
 
        else
        if (b>a*n)
        r=n*a;
        else
        r=b;
 
    cout<<r;
 
}