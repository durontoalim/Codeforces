#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N,a,b,c,d,count;
    cin>>N;

    while (N--)
    {
        cin>>a>>b>>c>>d;

        count = 0;

        for(int i=0; i<1; i++){
            if(a < b){
                count++;
            }
            if(a < c){
                count++;
            }
            if(a < d){
                count++;
            }
        }
        if(count == 0){
            cout<<"0\n";
        }
        else cout<<count<<endl;
        
    }
    

    return 0;
}