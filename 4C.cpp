#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    map<string,int>mp;

    while (N--)
    {
        string str;
        cin>>str;

        if(mp[str] == 0){
            mp[str] = 1;
            cout<<"OK"<<endl;
        }
        else{
            cout<<str<<mp[str]<<endl;
            mp[str]++;
        }
        
    }
    

    return 0;
}