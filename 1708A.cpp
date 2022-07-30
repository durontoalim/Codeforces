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
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(i > 0){
                if(arr[i] % arr[0] == 0){
                    count++;
                }
            }
            
        }
        if(count == n-1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
        
    }
    

    return 0;
}