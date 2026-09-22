#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
    
        long long n;
        cin>>n;
        while(true){
        int count=0;
        int nn=0;
        long long temp = n;
 
        while(temp>0){
        int digit = temp%10;
            if(digit!=0)
            {   nn++;
                if(n%digit==0)
                count++;
 
            }
           temp = temp/10;
        }
 
           
            
            
        
        if(count==nn)
        break;
        else
        n++;
        }
        
 
        
    cout<<n<<"
";
    }
 
    return 0;
}