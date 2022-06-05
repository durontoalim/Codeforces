#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int count,t;
    char ch;

    cin>>str;

    int len = str.length();

    

    for(int i=0; i<len; i++){

        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'Y' || str[i] == 'y'){
            str[i] = 'O';
        }
    }

    t = 0;

    while(str[t] != '\0'){

        if(str[t] == 'O'){
            t++;
            continue;
        }

        if(str[t] != '\0'){
            cout<<'.';
        }
        ch = tolower(str[t]);
        cout<<ch;

        t++;
    }
    cout<<endl;

    return 0;
}