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
            sum += arr[i];
        }

        int result = sum - b;

        if(result < 0){
            cout<<"0"<<endl;
        }
        else cout<<result<<endl;
    }

    return 0;
}