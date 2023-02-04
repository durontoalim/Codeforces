#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n; cin>>n;
        vector<int>v;
        vector<int>v_even;
        vector<int>v_odd;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());

        for (int i = 0; i < n; i++)
        {
            if(v[i]%2 == 0){
                v_even.push_back(v[i]);
            }
            else v_odd.push_back(v[i]);
        }

        int cnt = 0;
        int even_cnt = v_even.size();
        for (int i = 1; i <= even_cnt; i++)
        {
            cnt += n-i;
        }
        for (int i = 0; i < v_odd.size(); i++)
        {
            for (int j = i+1; j < v_odd.size(); j++)
            {
            
                if( __gcd(v_odd[i],v_odd[j]) > 1){
                    cnt++;
                }
            }
            
        }
        cout<<cnt<<endl;
        
    }
    
    
    
	return 0;
}