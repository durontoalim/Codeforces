#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n; int result;
        if(n < 6){
            cout<<15<<endl;
        }
        else{
            if(n%2 == 1){
                n = n+1;
                result = n*2.5;
            }
            else{
                result = n*2.5;
            }
            cout<<result<<endl;
        }
        
    }

    return 0;
}