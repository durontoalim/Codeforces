#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        int n,x; string str;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            cin>>str;
            int len = str.length();
            for (int j = 0; j < len; j++)
            {
                if(str[j] == 'D'){
                    arr[i]++;
                    if(arr[i] > 9){
                        arr[i] = 0;
                    }
                }
                if(str[j] == 'U'){
                    arr[i]--;
                    if(arr[i] < 0){
                        arr[i] = 9;
                    }
                }
            }
            if(i < n){
                cout<<arr[i]<<" ";
            }
            else if(n== i){
                cout<<arr[i];
            }
            
        }
        cout<<endl;
        
        

    }

    return 0;
}