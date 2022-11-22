#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;

    while (N--)
    {
        /* code */
        int n;
        cin>>n;


        string str;
        cin>>str;

        sort(str.begin(),str.end());

        char ch = str[str.length()-1];

        int sum = ch-96;

    

        cout<<sum<<endl;

    }
    
    

    
    

    return 0;
}