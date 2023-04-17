#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    int cnt = 1;
    int sum = -1, index;
    int thomas;
    while (t--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;
        int x = a+b+c+d;

        if(cnt == 1){
            thomas = x;
            
            cnt++;
        }
        if(thomas < x){
            cnt++;
        }
    }
    cout<<cnt-1<<endl;
    

    return 0;
}