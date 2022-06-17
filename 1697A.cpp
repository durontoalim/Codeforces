#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){
        int a,b,sum=0;
        cin>>a>>b;
        int arr[a];
        for(int i=0; i< a; i++){
            cin>>arr[i];
            if(arr[i] == b && i > 0){
                sum += arr[i-1] + arr[i];
            }
        }
        cout<<sum<<endl;
    }

    return 0;
}