#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int sub = N;

    int arr[N];

    vector<int> v;

    for (int i = 0; i < N ; i++)
    {
        cin>>arr[i];

        v.push_back(arr[i]);
    }

    sort(arr, arr+N );
    int index,i;
    int t = 0;
    while(sub--){
        
        for (i = 0; i < N; i++)
        {
            if(arr[t] == v[i]){
                index = i;
                break;
            }
        }
        t++;
        cout<<index+1<<" ";
    }
    cout<<endl;
    
    
    

    return 0;
}