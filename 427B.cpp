#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,a,b;
    cin>>N>>a>>b;

    int arr[N],count = 0;

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
        if(arr[i] == a) count++;
        if(arr[i] == b) count++;

    }

    cout<<count<<endl;
    

    return 0;
}