#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N; cin>>N;
    string str[N];
    for (int i = 0; i < N; i++)
    {
        cin>>str[i];
    }
    bool chk = false;
    for (int i = 0; i < N; i++)
    {
        if(str[i][0] == 'O' && str[i][1] == 'O'){
            str[i][0] = '+';
            str[i][1] = '+';
            chk = true;
            break;
        }
        else if(str[i][3] == 'O' && str[i][4] == 'O'){
            str[i][3] = '+';
            str[i][4] = '+';
            chk = true;
            break;
        }
    }
    if(chk){
        cout<<"YES"<<endl;
        for (int i = 0; i < N; i++)
        {
            cout<<str[i]<<endl;
        }
    }
    else cout<<"NO"<<endl;

    return 0;
}