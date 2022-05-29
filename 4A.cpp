#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int N;
    scanf("%d", &N);
    if(N == 2){
        printf("NO\n");
    }
    else if(N%2 == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
    return 0;
}