#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int n,arr[3];
        cin>>n;
        for(int i=0; i< 3 ; i++){
            cin>>arr[i];
        }

        if(arr[n-1] != 0){
            int check = arr[n-1];
            if(arr[check-1] != 0 ){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }

    }

    return 0;
}