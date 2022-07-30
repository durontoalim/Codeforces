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

        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>> arr[i] ;
        }
        sort(arr, arr+n);

        int result = arr[n-1] - arr[0];

        cout<<result<<endl;
    }
    

    return 0;
}