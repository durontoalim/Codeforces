#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }

    int max = 0;
    int count = 0;

    for (int i = 0; i < N-1; i++)
    {
        if(arr[i] <= arr[i+1]){
            count++;
            if(max < count){
                max = count;
            }
        }
        else{
            if(max < count){
                max = count;
            }
            count = 0;
        }
    }

    cout<<max+1<<endl;
    
    

    return 0;
}