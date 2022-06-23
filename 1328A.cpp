#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){
        int a,b,mod;

        cin>>a>>b;

        mod = a%b;

        if(mod == 0){
            cout<<mod<<endl;
            continue;
        }

        b -= mod;
        

        cout<<b<<endl;
    }
    

    return 0;
}