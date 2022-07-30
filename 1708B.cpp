#include<bits/stdc++.h>

using namespace std;

#define endl "\n" 


int gcd(int n1, int n2){
    int temp;
    int max = 0;
    while(n2 != 0){
        temp = n1%n2;
        n1 = n2;
        n2 = temp;
        if(max < n1 && max != n2){
            max = n1;
        }
    }

    return max;
}



int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int N;
    cin>>N;

    while (N--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int i=b; i< b+a ; i++){
            cout<<gcd(i,c)<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}
