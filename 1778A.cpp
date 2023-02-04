#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int N; cin>>N;
    while (N--)
    {
        int n; cin>>n;
        vector<int>v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        int t = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(v[i] == -1 && v[i+1] == -1){
                v[i] = 1;
                v[i+1] = 1;
                t = 1;
                break;
            }
        }
        if(t == 0){
            for (int i = 0; i < n; i++)
            {
                if(v[i] == -1){
                    t = 2;
                    break;
                }
            }
        }
        if(t == 0){
            sum -= 4;
        }
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }

        cout<<sum<<endl;
        
    }

    return 0;
}