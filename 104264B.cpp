#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mod = 1e9+7;
int32_t main()
{
    FastIO();
    int n; cin>>n;

    string str; cin>>str;
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        int ch = str[i] - 'a';
        ++ch;
        mul = (mul*ch)%mod;
    }

    cout<<mul%mod<<endl;
    

    return 0;
}