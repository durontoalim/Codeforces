#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    int len = str.length();

    int t = 0;

    for (int i = 0; i < len; i++)
    {
        
        if(str[i] == 'W' && str[i+1] == 'U' && str[i+2] == 'B'){
            i += 2;
            
            if(t == 0) cout<<" ";
            t++;
        }
        else{
            cout<<str[i];
            t = 0;
        }
        
    }
    

    return 0;
}