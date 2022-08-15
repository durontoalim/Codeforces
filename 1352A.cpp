#include <bits/stdc++.h>

using namespace std;
	
int main()
{
    int N;
    cin>>N;

    while(N--){
        int n;

        cin>>n;

        int first_output = n;
        int cc = 0;
        while(first_output > 0){
            if(first_output%10 != 0) cc++;
            first_output /= 10;
        }

        cout<<cc<<endl;

        int t = n,mod,count = 0;

        while(t > 0){
            mod  = t%10;

            t = t/10;

            count++;

            if(mod == 0) continue;
            
            int sub_count = count;
            int l = 0;
            bool x = false;
            while (sub_count--)
            {
                if(l == 0){
                    cout<<mod;
                    x = true;
                }
                if(x == true && l > 0){
                    cout<<"0";
                }
                l++;
            }
            cout<<" ";
            
        }
        cout<<endl;
        
    }

    return 0;
}