#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int mn = min(a,b);
    cout<<mn<<" ";

    int result = ( max(a,b)-mn) / 2;

    cout<<result<<endl;

    return 0;
}