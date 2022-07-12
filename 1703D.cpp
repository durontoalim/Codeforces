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

        while (n--)
        {
            int sum=0;
            string str;
            cin>>str;
            int len = str.length();

            for (int i = 0; i < len; i++)
            {
                char ch = str[i];
                int result = ch - 96;

                if(result > sum){
                     sum += result;
                }
                else if(result < sum){
                     sum -= result;
                }
                else if(result == sum){
                    sum = 0;
                }
                
                
            }
            if(sum == 0){
                    cout<<"1\n";
                }
                else cout<< "0\n";
            
        }
        
    }
    

    return 0;
}