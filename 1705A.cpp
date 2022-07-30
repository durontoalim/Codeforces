#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        int a,b;
        cin>>a>>b;
        int n = a * 2 ;
        
        vector <int> v;

        for (int i = 0; i < n; i++)
        {
            int p;
            cin>>p;
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        
        int count = 0;
        int len = n/2;
        for (int i = 0; i < len; i++)
        {
            int subs = v[i+len] - v[i];
            if(subs >= b){
                count++;
            }
        }

        if(count == a){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        
        
    }
    

    return 0;
}