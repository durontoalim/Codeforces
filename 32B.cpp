#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
   

    for ( int i = 0 ; i < str.length() ; i++)
    {
        if(str[i] == '.'){
            cout<<"0";
        }
        else if(str[i] == '-'){
            if(str[i+1] == '.'){
                cout<<"1";
            }
            else{
                cout<<"2";
            }

            i += 1;
        }
    }
    cout<<endl;
    



    return 0;
}