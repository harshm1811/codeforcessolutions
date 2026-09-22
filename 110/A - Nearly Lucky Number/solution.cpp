#include <iostream>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int count4=0;
    int count7=0;
    for(char c:s){
        if(c=='4'){
            count4++;
        }
        if(c=='7'){
            count7++;
        }
    }
    if(count4 + count7 == 4 || count4 + count7==7) {
        cout<<"YES";
    }
        else{
        cout<<"NO";
    }
    return 0;
}