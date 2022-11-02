#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int a,b; int s_size; int count = 0;
        cin>>a>>b;

        vector<int>v(a);

        map<int,int> m;

        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            m[v[i]]++;
        }

        for (auto i: m)
        {
            int mm = min(b,i.second);

            count += mm;
        }

        cout<<count<<endl;
        
    }
    

    return 0;
}