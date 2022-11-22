#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n;
        cin>>n;
        vector<int>v;
        vector<int>v2;
        unordered_set<int>st;
        for(int i=0; i< n; i++){
            int x;
            cin>>x;
            v.push_back(x);
            // st.insert(x);
        }
        for(int i=n-1; i>= 0; i--){
            st.insert(v[i]);
            
        }

        if(n==1) {
            cout<<"YES"<<endl;
            continue;
        }

        int l =n-1 , r = 0;
        int t = 0;

        if(v[0] < v[1]) t++;
        if(v[v.size()-1] < v[v.size() -2]) t++;

        for ( auto i: st)
        {
            v2.push_back(i);
        }
        

        for (int i = 1; i < v2.size()-2 ; i++)
        {
            
            if(v2[i-1] > v2[i] && v2[i] < v2[i+1]){
                t++;
            }
        }
        
        if(t == 1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    

    return 0;
}