#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int a,b,c; cin>>a>>b>>c;
    if(a <= b && a <= c){
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;

    return 0;
}