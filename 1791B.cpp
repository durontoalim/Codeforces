#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
	int n; cin>>n;
	while (n--)
	{
		int N; cin>>N;
        string str; cin>>str;

        int x=0, y = 0;
        int t = 0;
        for (int i = 0; i < N; i++)
        {
            if(str[i]== 'R'){
                x++;
            }
            else if(str[i] == 'L'){
                x--;
            }
            else if(str[i] == 'U'){
                y++;
            }
            else y--;

            if(x ==1 && y== 1){
                cout<<"YES"<<endl;
                t = 1;
                break;
            }
        }
        if(t ==1 ){
            continue;
        }
        else cout<<"NO"<<endl;
        
        
		
	}
	
	return 0;
}