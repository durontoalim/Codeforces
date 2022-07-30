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
        int index,index2;
        int count = 0;
        for (int i = 0; i < 1 ; i++)
        {
            for(int j=1; j< n; j++){
                if(arr[i] != arr[j]){
                    index = i;
                    index2 = j;
                    count++;
                }
            }
        }
        if(count == 1) cout<<index2+1<<endl;
        else cout<<index+1<<endl;
        
    }
    

    return 0;
}