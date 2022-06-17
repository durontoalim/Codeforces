#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,n;
    cin>>N;

    while(N--){
        cin>>n;

        int arr[n];

        for(int i =0; i< n; i++){
            cin>>arr[i];
        }
        int count = 1;
        int temp;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                if(arr[i] < arr[j]){
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        for(int i = 1; i < n; i++){
            
        }

        cout<<count<<endl;

        
    }

    return 0;
}