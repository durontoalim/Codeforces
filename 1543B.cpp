#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int N; cin>>N;
    while (N--)
    {
        int n; cin>>n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }

        int sum = accumulate(v.begin(), v.end(),n);
        int mod = sum%n;
        cout<<(n-mod)*mod<<endl;
        
    }
    

    return 0;
}