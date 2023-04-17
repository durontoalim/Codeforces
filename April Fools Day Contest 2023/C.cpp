#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<int> v = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5, 8, 9, 7, 9, 3, 2, 3, 8, 4, 6, 2, 6, 4, 3, 3, 8, 3, 2, 7, 9, 5};
 
int32_t main()
{
    FastIO();
    int t; cin>>t;
    int mul = 1;
    for (int i = 0; i < t; i++)
    {
        int mul = 1;
        while (v[i]--)
        {
            int x; cin>>x;
            mul *= x;
        }
        cout<<mul<<endl;
        
    }

    

    return 0;
}