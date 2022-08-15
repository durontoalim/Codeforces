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

        int arr[n];

        for (int i = 1; i <= n; i++)
        {
            arr[i] = i;
        }
        for (int i = 1; i <= n; i++)
        {
            if(i%2 == 0){
                swap(arr[i-1],arr[i]);
            }
        }
        if(n%2 == 1 && n>2){
            swap(arr[n-1], arr[n]);
        }
        for (int i = 1; i <= n; i++)
        {
            cout<<arr[i]<<" ";
        }

        cout<<"\n";
        
    }
    

    return 0;
}