#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    while (N--)
    {
        int a,b,c,d; cin>>a>>b>>c>>d;
        if(d < b){
            cout<<"-1"<<endl;
            return 0;
        }

        int x = c - a;
        int y = d - b;
        int mn = min(x,y);
        int ans = 0;
        ans += mn;
        if( x > y){
            cout<<"-1"<<endl;
            return 0;
        }
        cout<<ans+2<<endl;
    }
    

    return 0;
}