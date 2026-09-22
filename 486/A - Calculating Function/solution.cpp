#include <iostream>
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
 
    long long evens = (n/2) * (n/2 + 1);
    long long odds  = ((n+1)/2) * ((n+1)/2);
 
    cout << evens - odds;
}