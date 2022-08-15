#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){

        int n;
        cin>>n;

        int x1=0,y1=0,x2=0,y2=0;

        for (int i = 0; i < n; i++)
        {
            int a,b;

            cin>>a>>b;

            if(a > 0){
                x1 = max(x1,a);
            }
            if(a < 0){
                x2 = max( x2, abs(a) );
            }
            if(b > 0){
                y1 = max(y1,b);
            }
            if(b < 0){
                y2 = max( y2, abs(b) );
            }

        }

        int result = x1+x2+y1+y2;

        cout<< result * 2 <<endl;
        

        
    }

    return 0;
}