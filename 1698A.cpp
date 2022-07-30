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
        
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int x_or = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(i == j ) continue;
                x_or ^= arr[j];
            }
            if(x_or == arr[i] ) {
                cout<<arr[i]<<endl;
                break;
            }
            
        }
        
    }
    

    return 0;
}