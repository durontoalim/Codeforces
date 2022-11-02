#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        long long int a,b,even,odd,sum,x,y;
        even = 0, odd = 0, sum = 0;
        cin>>a>>b;
        long long int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
            arr[i] & 1 ? odd++ : even++;
            sum += arr[i];
        }
        for (int i = 0; i < b; i++)
        {
            cin>>x>>y;

            x ? sum+= (odd*y) : sum += (even*y);
            cout<<sum<<endl;

            if(y&1){
                if(!x) odd = a, even = 0;
                else odd = 0, even = a;
            }
        }
        
        
    }
    

    return 0;
}