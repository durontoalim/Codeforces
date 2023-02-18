#include <bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int t; cin>>t;

    while (t--)
    {
        int n; cin>>n;
        int a = n/2;
        int b = n-a;
        int x = a,y = b;
        int sum = 0, sum2 = 0;
        while (a > 0)
            {
                int temp = a%10;
                sum += temp;
                a /= 10;
            }
        while (b > 0)
            {
                int temp = b%10;
                sum2 += temp;
                b /= 10;
            }
        if(abs(sum-sum2) > 1){
            if(sum < sum2){
                x--;
            }
            else y--;
        }

        cout<<y<<" "<<x<<endl;
        
    }
    
    return 0;
}