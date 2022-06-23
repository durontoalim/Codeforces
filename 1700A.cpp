#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while(N--){
        int a,b;
        long long int sum = 0;

        cin>>a>>b;

        for (int i = 1; i <= b; i++)
        {
            sum += i; 
        }
        for (int j = 2; j <= a; j++)
        {
            for (int i = 1; i <= 1; i++)
            {
                
                sum += b*j;
            }
        }
        cout<<sum<<endl;
    }

    

    return 0;
}