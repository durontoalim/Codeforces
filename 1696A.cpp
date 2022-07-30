#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        int a,b;
        cin>>a>>b;
        int arr[a];
        for(int i=0; i< a; i++){
            cin>>arr[i];
        }
        int max = 0;
        for(int i=0; i< a; i++){
            int or_o = arr[i] | b;
            if(max < or_o){
                max = or_o;
            }
        }
        cout<<max<<endl;
    }
    

    return 0;
}