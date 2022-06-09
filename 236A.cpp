#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int w=0,j=0,m=0,z=0,b=0,r=0;
    cin>>str;

    int len = str.length();
    int count = 0;

    for(int i=0; i< len; i++){
        for(int j=i+1; j<len; j++){
            if(str[i] == str[j]){
                count++;
            }
        }
    }

    int result = len-count;

    if(result%2 == 0 ){
        cout<<"CHAT WITH HER!\n";
    }
    else if(result%2 == 1){
        cout<<"IGNORE HIM!\n";
    }

    return 0;
}