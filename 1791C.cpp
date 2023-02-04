#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        int n;
        cin>>n;

        string str; cin>>str;

        int t = n-1, cnt = 0;
        for (int i = 0; i < n/2; i++)
        {
            if( (str[i] == '1' && str[t]=='0') || (str[i] == '0' && str[t] == '1')){
                cnt++;
            }
            else break;
            t--;
        }

        
        cout<<n-(cnt*2)<<endl;
       
        
    }
    

    return 0;
}