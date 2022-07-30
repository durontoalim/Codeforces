#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        vector<int> v;
        vector<int> v2;

        int n;
        cin>>n;
        while (n--)
        {
            int t;
            cin>>t;
            v.push_back(t);
        }

        v.push_back(1);
        while(!v.empty()){
            
        }

        for(auto i: v){
            v2.push_back(i);
        }

        reverse(v2.begin() , v2.end() );

        for(auto i: v2){
            cout<<i;
        }

        

    }
    

    return 0;
}