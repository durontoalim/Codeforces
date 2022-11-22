#include <bits/stdc++.h>
#define int long long 
using namespace std;

int32_t main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n;
        cin>>n;
        vector<int>v;
        vector<int>v2;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
            v2.push_back(x);
        }

        sort(v2.begin(), v2.end());
        for (int i = 0; i < n; i++)
        {
            if(v[i] == v2[n-1]) cout<<v[i]-v2[n-2]<<" ";
            else{
                cout<<v[i]-v2[n-1]<<" ";
            }
        }
        cout<<endl;
        
        
    }
    

    return 0;
}