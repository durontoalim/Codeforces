#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,count=0;
    cin>>N;

    while(N--){
    
        int a,b;
        cin>>a>>b;
        if(a+1 < b){
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}