#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    int a,b;
    cin>>a>>b;

    int arr[b];

    for (int i = 0; i < b; i++)
    {
        cin>>arr[i];
    }
    
    sort(arr, arr+a);

    cout<<arr[a-1]-arr[0]<<endl;
    



    return 0;
}