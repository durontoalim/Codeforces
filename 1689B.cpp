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
        int store = n;
        int arr[n];
        int arr2[n];
        int t= n-1 ;
        for (int i=0; i< n; i++)
        {
            cin>>arr[i];
            arr2[t] = arr[i];
            t--;
        }
        sort(arr2, arr2 + store);

        int arr3[n];

        int count = 0;
        int f = 0;
        for (int i=0; i< n; i++)
        {
            if(arr[i] != arr2[i]){
                arr3[f] = arr2[i];
                f++;
            }
        }

        int len_arr3 = sizeof(arr3) / sizeof(arr[0]);

        for (int i = len_arr3; i < n; i++)
        {
            if(arr[i] == arr2[i]){
                arr3[f] = arr2[i];
                f++;
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            cout<<arr3[i]<<" ";
            
        }
        
        

        cout<<endl;
        









        // if(count == n){
        //     for (int i = 1; i < n; i++)
        //     {
        //         cout<<arr2[i]<<" ";
        //     }
        //     cout<<arr2[0]<<endl;
            
        // }
        // else{
        //     for (int i = 0; i < n-1; i++)
        //     {
        //         cout<<arr2[i]<<" ";
        //     }
        //     cout<<arr2[n-1]<<endl;
            
        // }

        
    }
    

    return 0;
}