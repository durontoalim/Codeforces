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

        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0){
                for (int j = 0; j < i; j++)
                {
                    /* code */
                    sum += v[j];
                }
            }
        }
        int maxx = 0;
        int index;
        int  t = 0;
        for (int i = 0; i < n; i++)
        {
            if( v[i] == 0 && t == 0 ){
                v[i] = 1;
                index = i;
                t++;
            }
            if(v[i] == 0){
                for (int j = 0; j < i; j++)
                {
                    /* code */
                    maxx += v[j];
                }
            }
        }
        v[index] = 0;
        int mx = max(sum,maxx);

        int mx2 = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if(v[i] == 1) v[i] = 0;
            break;
            
        }

        for (int i = 0; i < n; i++)
        {
            if(v[i] == 0){
                for (int j = 0; j < i; j++)
                {
                    /* code */
                    mx2 += v[j];
                }
            }
        }

        int result = max(mx,mx2);

        cout<<result<<endl;        
        
    }
    
    return 0;
}