#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){
        long long int result,m;
        cin>>m;
        for (int i = 0; i <= 10; i++)
        {
            
            long long int pw = pow(10,i);
            if(m < pw){
                break;
            }

            if(pw <= m){
                result = m-pw;
            }
        }
        cout<<result<<endl;

    }
    

    return 0;
}