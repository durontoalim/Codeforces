#include <bits/stdc++.h>

#define FastIO                      \
    ios::sync_with_stdio(false);    \
    cin.tie(0);                     \
    cout.tie(0);                    \


using  namespace std;

#define for_loop(i, n) for (int i = 0; i < int(n); i++)
#define PI acos(-1)
#define endl      "\n"
#define clr(arr,x)      memset(arr, x, sizeof arr)
#define vout(v,sz)      for(int w=0;w<sz;w++){if(w) cout<<" ";else cout<<endl; cout<<v[w];}
#define all(v)          v.begin(), v.end()
#define rall(v)         v.rbegin(), v.rend()
#define F first
#define S second
#define tu tuple <int, int, int>
#define eps (double)(1e-7)
 
typedef long long ll;
typedef unsigned long long ull;
typedef unsigned int uint;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void file();

// User Define Function

void user_defined();

int fibo(int n);


int buble_sort(int arr[], int len);

//--------------------------------------

int main(){

    // Speed Booster

    FastIO;

    // Implement

    int N;
    cin>>N;
    int arr[N];
    int min = 100;
    int max = 0;
    int max_index, min_index;
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];

        if(arr[i] > max){
            max = arr[i];
            max_index = i;
        }
        if(arr[i] <= min){
            min = arr[i];
            min_index = i;
        }
    }
    if(max_index > min_index) min_index++;
    int result = max_index + (N-1) - min_index;

    cout<<result<<endl;

    // for (int i = 0; i < N; i++)
    // {
    //     cout<<arr[i]<<' ';
    // }
    


    return 0;
}


// int buble_sort(int arr[], int len){
//     int count = 0;
//     for (int i = 0; i < len; i++)
//     {
//         for (int j = i; j < len-i-1; j++)
//         {
//             /* code */
//             if(arr[j] < arr[j+1]){
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;

//                 count++;
//                 break;
//             }
//         }
        
//     }


//     return count;
    
// }