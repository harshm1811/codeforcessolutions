#include <iostream>
using namespace std;
 
int main() {
    string s;
    cin>>s;
    int cnt=0;
    for(char c:s){
        if('a'<=c && c<='z'){
            cnt++;
        }}
        if(cnt>=s.size()-cnt){
            for(char &c:s){
                if('A'<=c && c<='Z'){
                    c = c+32;
                }
            }
        }else{
              for(char &c:s){
                if(('a'<=c && c<='z')){
                    c = c-32;
             }
       }}
      cout<<s;
    return 0;
}