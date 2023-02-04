#include <bits/stdc++.h>
#define int long long
using namespace std;
 
int32_t main()
{
    int n; cin>>n;
 
    while (n--)
    {
        string str;
        cin>>str;
        string pi = "3141592653589793238462643383279502884197";
 
        int cnt = 0;
 
        for (int i = 0; i < 31; i++)
        {
            if(str[i]==pi[i]){
                cnt++;
            }
            else{
                break;
            }
        }
 
        cout<<cnt<<endl;
        
    }
    
	
	return 0;
}