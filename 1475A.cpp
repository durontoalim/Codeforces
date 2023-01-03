#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"
int main()
{
    ll N;
    cin>>N;

    while (N--)
    {
        ll a;
        cin>>a;

        if( (a&(a-1) ) == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    

    return 0;
}