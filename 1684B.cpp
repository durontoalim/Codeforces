#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int N;
    cin>>N;
    while(N--){
 
        int a,b,c;
 
        cin>>a>>b>>c; 
 
        int x = a+b+c;
        int y = b+c;
        int z = c;
 
        cout<<x<<" "<<y<<" "<<z<<endl;
 
    }
 
    return 0;
}