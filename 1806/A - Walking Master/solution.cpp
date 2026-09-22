#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int a , b ,c ,d ;
    cin>>a>>b>>c>>d;
    if (b>d||(c-a)>(d-b))
        cout<<-1<<"
";
        else
        {
            int x = abs((a-c)+2*(d-b));
            cout<<x<<"
";
        }
    }
    return 0;
}