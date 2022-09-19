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

        string str,str2;

        cin>>str;
        cin>>str2;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if(str[i] == str2[i]){
                count++;
            }
            else if(str[i] == 'G' && str2[i] == 'B'){
                count++;
            }
            else if(str[i] == 'B' && str2[i] == 'G') count++;
        }

        if(count == n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    

    return 0;
}