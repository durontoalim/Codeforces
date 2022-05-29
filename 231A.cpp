#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N,sum=0;
 
    cin>>N;
 
    while(N--){
        int arr[3];
        int count = 0;
        for(int i =0; i<3; i++){
            cin>>arr[i];
            if(arr[i] == 1){
                count++;
            }
        }
        if(count>=2){
            sum += 1;
        }
 
    }
 
    cout<<sum<<endl;
    
    return 0;
}