#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;
    int sub_x = x;

    if(x%10 == y || x%10 == 0) {
        cout<<1<<endl;
        return 0;
    }

    int count = 1;
    while (sub_x%10 != y)
    {
        count++;
        sub_x = x * count;

        if(sub_x%10 == 0) break;

        
    }
    cout<<count<<endl;
    
    

    return 0;
}