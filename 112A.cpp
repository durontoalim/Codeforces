#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,str2;

    cin>>str;
    cin>>str2;

    int len = str.length();
    int len2 = str2.length();

    int count = 0, count2 = 0, count3 = 0;

    for(int i=0; i< len ; i++){
        
            char ch = str[i];

            char ch2 = str2[i];

            if(ch >= 97 && ch <= 122){
                str[i] = ch - 32;
            }
            if(ch2 >= 97 && ch2 <= 122){
                str2[i] = ch2 - 32;
            }
            int str_i = str[i];
            int str_i2 = str2[i];


            if(str[i] == str2[i]){
                count++;
            }
            else if(str_i > str_i2){
                count2 = 1;
                break;
            }
            else if( str_i < str_i2 ){
                count3 = 1;
                break;
            }
        
    }

    if( len == count ) {
        cout<<"0\n";
    }
    else if(count2 == 1){
        cout<<"1\n";
    }
    else if (count3 == 1 ) cout<<"-1\n";



    return 0;
}