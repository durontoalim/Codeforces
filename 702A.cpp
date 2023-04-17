#include <bits/stdc++.h>
using namespace std;
#define int long long
#define FastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main()
{
    FastIO();
    int t; cin>>t;
    int arr[t+1];
    int cnt = 0;
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }
    int c = 1;
    int flag = 0;
    if(t == 1) cnt = 1;
    for (int i = 1; i < t; i++)
    {

        if(arr[i] > arr[i-1]){
            c++;
        }
        else c = 1;

        if(cnt < c){
            cnt = c;
        }
    }

    cout<<cnt<<endl;
    
    

    return 0;
}