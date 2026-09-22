#include <iostream>
using namespace std;
 
int main()
{
    int x;
    int n;
    cin>>x;
 
    if (x<=5)
        n=1;
    else if (x>5 && x<=10)
        n=2;
    else 
        if (x%5==0)
        n= x/5;
        else
        n= (x+5)/5;
 
    cout<<n;
}