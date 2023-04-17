#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int n; cin>>n;
    if(n%2 == 0){
        cout<<n/2<<endl;
        for (int i = 0; i < n/2; i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
        return 0;
    }
    else{
        int subs = n-3;
        cout<<subs/2+1<<endl;
        for (int i = 0; i < subs/2; i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
        return 0;
    }

    return 0;
}