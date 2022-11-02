#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        string str, str2;
        cin>>str>>str2;


        int len = str.length();
        int len2 = str2.length();


        if(str == str2){
            cout<<"="<<endl;
        }
        else if(str[len-1] == 'S' && str2[len2-1] == 'M'){
            cout<<"<"<<endl;
        }
        else if(str[len-1] == 'M' && str2[len2-1] == 'S'){
            cout<<">"<<endl;
        }
        else if(str[len-1] == 'S' && str2[len2-1] == 'L'){
            cout<<"<"<<endl;
        }
        else if(str[len-1] == 'L' && str2[len2-1] == 'S'){
            cout<<">"<<endl;
        }
        else if(str[len-1] == 'M' && str2[len2-1] == 'L'){
            cout<<"<"<<endl;
        }
        else if(str[len-1] == 'L' && str2[len2-1] == 'M'){
            cout<<">"<<endl;
        }
        else if(str[len-1] == str2[len2-1] ){
      
            if(str[len-1] == 'L'){
                if(len < len2){
                    cout<<"<"<<endl;
                }
                else cout<<">"<<endl;
            }

            if(str[len-1] == 'S'){
                if(len < len2){
                    cout<<">"<<endl;
                }
                else cout<<"<"<<endl;
            }
        }


    }
    

    return 0;
}