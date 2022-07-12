#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,final=0;
    cin>>n;

    cin>>x>>y;

    int N = n-1;

    while(N--){

        if(final < y){
            final = y;
        }
        
        int a,b;
        cin>>a>>b;
        

        y = (y-a) + b;

    }

    cout<<final<<endl;

    return 0;
}