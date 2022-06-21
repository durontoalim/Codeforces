#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    getline(cin,str);

    for(int i=1; i< str.length() ; i++){
        int ch = str[i];
        if(str[i] == '')
        if(ch >= 65 && ch<= 90){
            str[i] = str[i]+32;
        }
    }

    int ch2 = str[0];
    if(ch2 >= 97 && ch2 <= 122){
        str[0] = str[0]-32;
    }

    cout<<str[0];

    for(int i=1; i< str.length() ; i++){
        cout<<str[i];
    }

    cout<<endl;

    return 0;
}