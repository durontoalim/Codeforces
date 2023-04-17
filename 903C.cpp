#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin>>N;
    int arr[N+10];
    map<int,int> mp;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        mp[arr[i]]++;
    }
    int result = 0;
    for (int i = 0; i < N; i++) result = max(result,mp[arr[i]]);
    cout<<result<<endl;
    
    return 0;
}