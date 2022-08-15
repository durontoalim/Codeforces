#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        long long int n;
        cin>>n;

        long long int arr[n];

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int t=0;
        for(int i= n -1 ; i >= 0; --i){
            s.insert(arr[i]);
            t++;
            if(s.size() < t){
                break;
            }
        }
        cout<<n-s.size()<<endl;
        
        
    }
    

    return 0;
}