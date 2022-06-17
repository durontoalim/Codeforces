#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    bool t = true;
    cin>>str;

    int len = str.length();

    int count =0, count2 = 0;
    for(int i=0; i< len; i++){
        if(str[i] == '0'){
            count++;
            count2 = 0;
        }
        else if(str[i] == '1'){
            count2++;
            count = 0;
        }

        if(count == 7){
            cout<<"YES\n";
            t = false;
            break;
        }
        else if(count2 == 7){
            cout<<"YES\n";
            t = false;
            break;
        }
    }
    if(t == true){
        cout<<"NO\n";
    }

    return 0;
}