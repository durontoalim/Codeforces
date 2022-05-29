#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    char ch[101];
    int N;
 
    cin>>N;
 
    while(N--){
        scanf("%s",&ch);
 
        int len = 0;
        for(int i =0; ch[i] != '\0'; i++){
            len++;
        }
        if(len<11){
            cout<<ch<<endl;
        }
        else{
            int t = 0;
            for(int i=1; i<len-1; i++){
                t++;
            }
            cout<<ch[0]<<t<<ch[len-1]<<"\n";
 
        }
 
    }
    
    return 0;
}