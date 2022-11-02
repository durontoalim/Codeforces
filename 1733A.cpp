#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i =0; i< n; i++){
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                if(i%k == j%k){
                    if(arr[i] < arr[j]){
                        swap(arr[i],arr[j]);
                    }
                }
            }
            
        }
        

        long long int sum,max = 0;
        for(int i =0; i<= n-k; i++){
            sum = 0;
            for (int j = i; j < i+k; j++)
            {
                sum += arr[j];
                
            }
            if(max < sum){
                max = sum;
            }
            
        }

        cout<<max<<endl;

        
    }
    

    return 0;
}