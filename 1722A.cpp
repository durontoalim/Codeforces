#include <bits/stdc++.h>
 
using  namespace std;
 
 
int main(){
 
    int N;
    cin>>N;
 
    while (N--)
    {
        int n;
        cin>>n;
 
        string str;
        cin>>str;

        int count = 0;
        int count_i = 0;
        int cntm = 0, cntu = 0, cntr = 0;


        for (int i = 0; i < str.size() ; i++)
        {
            if(str[i] == 'T') count++;
            else if(str[i] == 'i') count_i++;
            else if(str[i] == 'm') cntm++;
            else if(str[i] == 'u') cntu++;
            else if(str[i] == 'r') cntr++;
        }
        
        if(str.size() == 5 && count == 1 && count_i == 1 && cntm == 1 && cntu == 1 && cntr == 1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
 
 
    return 0;
}
 
 
 
////////////////////////////
///////////////////////////
 
 
bool cmp(int a, int b){
    if(a > b){
        return true;
    }
    else return false;
}