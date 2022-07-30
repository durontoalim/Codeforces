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
        string str;
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        for (int i = 0; i < b; i++)
        {
            str[i] = 'B';

        }
        for (int i = 0; i < a; i++)
        {
            if(i==0 && arr[i] == 1){
                str[i] = 'A';
                continue;
            }
            int result = (b+1) - arr[i];
            if(result < i+1){
                str[b-result] = 'A';
                continue;
            }
            str[result-1] = 'A';

        }
        for (int i = 0; i < b; i++)
        {
            cout<<str[i];

        }

        cout<<endl;
        
        
    }
    

    return 0;
}