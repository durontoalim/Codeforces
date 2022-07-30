#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        long long int x,y;
        cin>>x>>y;
        long long int arr[x];
        
        for (int i = 0; i < x; i++)
        {
            cin>>arr[i];
            
        }
        
        

        for (int i = 0; i < y; i++)
        {
            int index_1 = x , index_2 = -1;

            long long int a,b;
            cin>>a>>b;

            for(int j=0; j < x ; j++){

                if(index_1 == x){
                    if(arr[j] == a) {
                        index_1 = j;

                    }
                }

                if(arr[j] == b){
                    index_2 = j;
                } 
            }

            if(index_1 < index_2){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
            
        }
        
    }
    

    return 0;
}