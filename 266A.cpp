#include <bits/stdc++.h>

using namespace std;
	
int main()
{
    int N,count = 0, count2 = 0, count3 = 0,r=0,b=0,g=0;
    cin>>N;

    string str;

    cin>> str;

    for (int i = 0; i < N; i++)
    {
        if(str[i] == 'R'){
            r++;
            b = 0;
            g = 0;
            if(r > 1){
                count++;
            }
        }
        else if(str[i] == 'B'){
            b++;
            r = 0;
            g = 0;
            if(b > 1){
                count2++;
            }
        }
        else if(str[i] == 'G'){
            g++;
            r = 0;
            b = 0;
            if(g > 1){
                count3++;
            }
        }
    }

    int result = count+ count2 + count3;

    cout<<result<<endl;
    
    

    return 0;
}