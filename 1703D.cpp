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
        cin.ignore();
        string str[n];

        for (int i=0; i< n ; i++ )
        {
            cin>>str[i];
        }

        int store_n = n;
        int t = 0;
        while(store_n--){
            int count = 0;

            for(int k=0; k< n; k++){
                if(t == k) continue;
                for (int i = 0; i < n; i++)
                {
                    if(i== t) continue;

                        string result = str[k] + str[i];
                        string result2 = str[i] + str[k];

                        if(  result == str[t] || result2 == str[t]  ){
                            count++;
                            break;
                        }
                }
            }

            t++;

            if(count > 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }

        }


        cout<<endl;
        

        
    }
    

    return 0;
}