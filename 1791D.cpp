#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int N; cin>>N;
    while (N--)
    {
        int n; cin>>n;
        string str; cin>>str;
        
        map<char,int>mp;
        vector<int>v;
        int sum = 0;
        set<char>st;

        for (int i = 0; i < n; i++)
        {
            st.insert(str[i]);
        }
        
        for (int i = 0; i < n; i++)
        {
            if(mp[str[i]]++ == 0 ){
                sum += 1;
                v.push_back(sum);
            }
            else{
                v.push_back(sum);
            }
        }

        vector<int>v2;
        map<char,int> mp2;
        int sum2 = 0;
        for (int i = n-1; i >= 0; i--)
        {
            if(mp2[str[i]]++ == 0 ){
                sum2 += 1;
                v2.push_back(sum2);
            }
            else{
                v2.push_back(sum2);
            }
        }
        sort(v2.rbegin(),v2.rend());

        int result = 0;

        for (int i = 0; i < n-1; i++)
        {
            int final = v[i]+v2[i+1];
            if(final > result){
                result = final;
            }
        }

        cout<<result<<endl;
        
    }
    

    return 0;
}