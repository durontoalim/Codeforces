#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int n; cin>>n;

    string str; cin>>str;
    string str2; cin>>str2;
    int move = 0;
    for (int i = 0; i < n; i++)
    {
        int ch1 = (int)str[i] - '0';
        int ch2 = (int)str2[i] - '0';

        int x = abs(ch1-ch2);
        int x2 = ch1 + 10 - ch2;
        int x3 = 10 - ch1 +  ch2;
        
        move += min(x,min(x2,x3));
    }
    cout<<move<<endl;
    


    return 0;
}