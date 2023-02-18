#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<int> v;
        int x; cin>>x;
        for (int  i = 1; i < n; i++)
        {
            int in; cin>>in;
            x = x & in;
        }
        cout<<x<<endl;
    }

    return 0;
}