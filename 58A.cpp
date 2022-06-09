#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    string str;
    getline(cin,str);
 
    int t =0;
 
    for(int i=0; i< str.length() ; i++){
        if( t == 0 && str[i] == 'h' || str[i] == 'H'){
            t++;
        }
        else if(t == 1 && str[i] == 'e' ){
            t++;
        }
        else if(t == 2 && str[i] == 'l'){
            t++;
        }
        else if(t == 3 && str[i] == 'l'){
            t++;
        }
        else if(t == 4 && str[i] == 'o' ){
            
            t = 5;
        }
    }
 
    if(t == 5){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
 
    return 0;
}