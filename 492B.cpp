#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n; cin>>n; int dis; cin>>dis;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }

    sort(v.begin(),v.end());
    int len = v.size();
    int first_min = v[0];

    for (int i = 0; i < v.size()-1; i++)
    {
        int for_min = v[i+1]-v[i];

        if(first_min < for_min){
            first_min = for_min;
        }
    }

    double a = (double)first_min/2;
    double b = (double)(dis-v[len-1]);
    double vec = v[0];
    double result = max(a,vec);
    result = max(result,b);

    cout<<fixed<<setprecision(10)<<result<<endl;
    
	return 0;
}