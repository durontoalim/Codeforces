#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;cin>>N;
    
    while (N--)
    {
        vector<int>v;
        int n; cin>>n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x; cin>>x;
            sum += x;
            v.push_back(x);
        }
        
        for (int i = 0; i < n; i++)
        {
            if(v[i] < 0 && v[i+1] <0 ){
                v[i] =
            }
            
            
        }


        

    }
    

    return 0;
}