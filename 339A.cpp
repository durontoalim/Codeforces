#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    int temp;
    cin>>str;

    int len = str.length();

    int arr[len];

    int t = 0;

    for(int i=0; i<len ; i++){
        if(str[i] != '+'){

            arr[t] = str[i]-48;

            t++;
        }
    }
    int len2 = t;

    for(int i=0; i<len2 ; i++){
        for(int j=i+1; j<len2; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<arr[0];

    for(int i=1; i<len2 ; i++){
        cout<<"+"<<arr[i];
    }
    cout<<"\n";



    return 0;
}