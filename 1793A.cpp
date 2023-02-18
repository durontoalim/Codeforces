#include <bits/stdc++.h>
#define int long long
#define case "Case "
#define semicollon ": "
using namespace std;

int32_t main()
{
    int n; cin>>n;

    while (n--)
    {
        int a,b; cin>>a>>b;
        int m,n; cin>>m>>n;
        if(n > m){
            cout<<m*a<<endl;
            continue;
        }
        int mul = n*a;

        int x = m-(n+1);

        int total = x*b;

        int result1 = total+mul;

        
    }
    
    
    
    return 0;
}