#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        int x,y;
        cin>>x>>y;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < y; i++)
        {
            int t= 0;
            int f=0,f2=0;
            int a,b;
            cin>>a>>b;

            for (int i = 0; i < x; i++)
            {
                if(arr[i] == a){
                    if(t == 1){
                        continue;
                    }
                    f = i;
                    t++;
                }
                if(arr[i] == b && t == 1){
                   
                    f2 = i;
                    break;
                }
            }
            if(f < f2){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
            
        }
        
    }
    

    return 0;
}