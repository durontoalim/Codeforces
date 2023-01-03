#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int N,a;
    cin>>N>>a;

    vector<int>v;
    vector<int>v2;

    for (int i = 0; i < a; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int x = 0;
    x += v[0] - 1;
    for (int i = 0; i < a-1; i++)
    {
        if(v[i] > v[i+1]){

            x += N - (v[i]-v[i+1]);

        }
        else{
            x += v[i+1] - v[i];
        }
    }

    cout<<x<<endl;
    
    

    return 0;
}