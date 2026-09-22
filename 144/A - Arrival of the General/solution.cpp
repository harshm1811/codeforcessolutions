#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
}
  int max = a[0];
  int min = a[0];
  int c=0; int b=0;
  for(int i = 0 ; i<n ;i++){
     if(a[i]>max){
        max=a[i];
        c =i;
     }
    }
   for(int i = 0 ; i<n ;i++){
   
     if(a[i]<=min){
        min=a[i];
        b=i;
     }
  }
 
   int ans = c+(n-1-b);
   if(c>b){
    ans--;
   }
   cout<<ans;
  
    return 0;
}