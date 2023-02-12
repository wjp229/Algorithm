#include <iostream>

using namespace std;

int sol11726()
{
    int num = 0;
    
    cin >> num;

    int dp[1001];
    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i < num; i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]);
    }

    cout << (dp[num - 1]) << "\n";

    return 0;
}
