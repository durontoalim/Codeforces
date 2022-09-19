#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
#define endl "\n"
int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        ll a;
        cin>>a;

        if(a % 2 != 0 || (a%3 == 0) || (a%5 == 0) || (a%7 == 0) || (a%9 == 0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    

    return 0;
}