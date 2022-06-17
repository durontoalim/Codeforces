#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;

    cin>>str;

    int len = str.length();

    int count = 0, count2 = 0;

    for(int i=0; i< len; i++){
        int ch3 = str[i];

        if(ch3 > 96 && ch3 < 123){
            count++;
        }
        else{
            count2++;
        }
        
    }

    if(count == count2){
        for(int i=0; i< len; i++){
            int ch3 = str[i];
 
            if(ch3 > 64 && ch3 < 91 ){
                str[i] = str[i] + 32 ;
            }
        
        }
    }
    else if(count < count2){
 
        for(int i=0; i< len; i++){
            int ch3 = str[i];
 
            if(ch3 > 96 && ch3 < 123){
                str[i] = str[i] -32 ;
            }
        
        }
 
    }
    else{
 
        for(int i=0; i< len; i++){
            int ch3 = str[i];
 
            if(ch3 > 64 && ch3 < 91 ){
                str[i] = str[i] + 32 ;
            }
        
        }
 
    }

    for(int i=0; i< len; i++){
        cout<<str[i];
    }
    cout<<"\n";

    return 0;
}