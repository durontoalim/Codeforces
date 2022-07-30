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
        int count = 0;
        for (int i = 0; i < n-1; i++)
        {
            int sum = arr[i] + arr[i+1];
            if(sum % 2 == 0){
                continue;
            }
            else {
                count++;
                i++;
            }
        }
        cout<<count<<endl;


        
    }
    

    return 0;
}