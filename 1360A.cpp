#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while(N--){
        int a,b;
        cin>>a>>b;
        if(b < a){
            b = 2*b;
        }
        else a = a*2;
        

        int max = a;
        if( a < b ){
            max = b;
        }
        int result = pow(max,2);

        cout<<result << endl;


    }

    return 0;
}