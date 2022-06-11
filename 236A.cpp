#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int arr[123],ch,sum=0,result;

    cin>>str;

    int len = str.length();


    arr[120] = 0;

    for(int i=0; i< len; i++){
        ch = str[i];
        arr[ch] = 1;
        
    }

    for(int i=97; i< 123; i++){

        if(arr[i] == 1){
            sum += arr[i];
        }
        
    }

    result = sum;


    if(result%2 == 0 ){
        cout<<"CHAT WITH HER!\n";
    }
    else if(result%2 == 1){
        cout<<"IGNORE HIM!\n";
    }

    return 0;
}