#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    while (N--)
    {
        int n;
        cin>>n;

        int arr[n];

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        string str;
        cin>>str;

        int count = 0;

        map<int,char> mp;

        for (int i = 0; i < n; i++)
        {
            if(mp.find(arr[i]) != mp.end() && str[i] != mp[arr[i]]){
                count = 1;
                break;
            }
            mp.insert( {arr[i],str[i]} );
        }

        if(count == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        


    }
    

    return 0;
}