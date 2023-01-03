#include <iostream>
#include <algorithm>

using namespace std;



int main() {
    int n = 4;
    int a[n];
    int dp[n];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + n + 1);

    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = -1;
        for (int j = 0; j < i; j++) {
            if (a[i] % a[j] == 0) {
                dp[i] = max(dp[i], dp[j] + a[i] / a[j]);
            }
        }
    }

    cout << dp[n] << endl;

    return 0;
}