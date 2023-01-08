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
        int arr[n+1];
        vector<int>v;
        set<int>s;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            v.push_back(arr[i]);
            s.insert(arr[i]);
        }

        if(s.size() == 1 && n != 1){
            cout<<"NO"<<endl;
            continue;
        }
        else if(n == 1){
            cout<<"YES"<<endl;
            cout<<arr[0]<<endl;
            continue;
        }

        int sum = arr[0], t = 0;
        
        for (int i = 1; i < n; i++)
        {
            if(sum == arr[i]){
                t = 1;
                break;
            }
            sum += arr[i];
        }

        if(t == 1) { 

            
        
            cout<<"YES"<<endl;
            sort(v.rbegin(), v.rend());

            if(v[0] == v[1]){
                swap(v[0],v[v.size()-1]);
            }

            for (int i = 1; i < n-1; i++)
            {
                if(v[i] == v[i-1]) swap(v[i],v[i+1]);
            }
            

            for(auto i: v){
                cout<<i<<" ";
            }
        }
        else{
            cout<<"YES"<<endl;
            for (int i = 0; i < n; i++)
            {
                cout<<arr[i]<<" ";
            }
            
        }
        

        cout<<endl;
        
        
    }
    
    return 0;
}