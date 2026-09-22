#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {   string s;
        cin>>s;
       int  n=s.size();
        int nz=0 ;
        int no=0;
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]=='0')
            nz++;
            else
            no++;
        }
        int t =  0;
        for(int i = 0 ; i< n ; i++)
        {
            if( s[i]=='0' && no>0)
            {
                no--;
                t++;
            }
            else if (s[i]=='1' && nz>0)
            {
                nz--;
                t++;
            }
            else
            {
                break;
            }
        }
        cout<< n-t <<"
";
    }
    return 0;
}