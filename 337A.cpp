#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int a,b;
    cin>>a>>b;

    vector<int> v;

    for (int i = 0; i < b; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    
    sort(v.begin(), v.end());

    int check = v[b-1]-v[0];
    int t;
    for (int i = a; i <= b; i++)
    {
        t = abs(v[i-1]-v[i-a]);
        check = min(check,t);
    }

    cout<<check<<endl;
    
    



    return 0;
}