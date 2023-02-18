#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N; cin>>N;
    while (N--)
    {
        int a,b; cin>>a>>b;
        string str; cin>>str;
        string str2; cin>>str2;
        string sub_str = str;
        string sub_st2;
        sub_st2 += str2[0];
        int cnt = 0, cnt2 = 0;
        int index = -1;

        for (int i = str2.length()-1; i > 0; i--)
        {
            sub_str += str2[i]; 
        }

        for (int i = 0; i < sub_str.length()-1; i++)
        {
            if(sub_str[i] == sub_str[i+1]){
                cnt = 1;
                index = i;
                for (int j = sub_str.length()-1; j > index; j--)
                {
                    sub_st2 += sub_str[j];
                }
                for (int j = 0; j < sub_st2.length()-1; j++)
                {
                    if(sub_st2[j] == sub_st2[j+1]){
                        cnt2 = 1;
                        break;
                    }
                }
                
                break;
            }
        }
        
        if(cnt == 0 || cnt2 == 0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    
    }
    
    return 0;
}