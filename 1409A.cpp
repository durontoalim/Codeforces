#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int t = 0;
        int a,b;
        cin>>a>>b;
        
        int sub = abs(a-b);

        int result = sub / 10;

        if(sub%10 != 0){
            cout<<result+1<<endl;

        }
        else cout<<result<<endl;

        
    }
    

    return 0;
}