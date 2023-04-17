#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    while(t--){
        int x,y; cin>>x>>y;

        int dis = abs(x-y);

        if(x == y && x > 1 && y > 1){
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
            cout<<x<<" "<<y<<endl;
        }
        else if(x == y && x == 1){
            cout<<1<<endl;
            cout<<x<<" "<<y<<endl;
        }
        else if(dis == 1){
            cout<<1<<endl;
            cout<<x<<" "<<y<<endl;
        }
        else if(x == 1 || y == 1){
            cout<<1<<endl;
            cout<<x<<" "<<y<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
            cout<<x<<" "<<y<<endl;
        }
    }

    return 0;
}