#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N;
    cin>>N;
 
    cin.ignore();
 
    while(N--){
 
        int result = 1;
        string str;
        cin>>str;
 
        int len = str.size();
 
        set<char> s;
 
        for (int i = 0; i < len; i++)
        {
            s.insert(str[i]);
            
            if(s.size() > 3){
                result++;
                s.clear();
                s.insert(str[i]);
            }
        }
 
        cout<<result<<endl;
 
    }
    
    
 
 
    return 0;
}