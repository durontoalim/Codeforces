#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){
        int n;
        cin>>n;

        int arr[n+1];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int *lw = min_element(arr,arr+n);

        cout<"1 "<<n<<endl;
        
    }

    return 0;
}