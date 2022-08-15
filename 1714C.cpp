#include <bits/stdc++.h>

using namespace std;
	
int main()
{
    int N;
    cin>>N;

    while(N--){
        int n;
        
        cin>>n;

        vector<int> v;

        for (int i = 9; i > 0; --i)
        {
            if(n >= i){
                n -= i;
                v.push_back(i);
            }

            if(n == 0){
                break;
            }
        }
        
        int len = v.size();

        for (int i = len-1; i >= 0; --i)
        {
            cout<<v[i];
        }
        cout<<"\n";
        
    }

    return 0;
}