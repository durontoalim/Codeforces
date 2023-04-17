#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    while (t--)
    {
        int n,x; cin>>n>>x;
        if(n < 3){
            cout<<1<<endl;
            continue;
        }
        int a = n-2;
        double result = ceil((double)a/x);
        cout<<(int)result+1<<endl;

    }

    return 0;
}