#include <iostream>

using namespace std;

int sol9095()
{
    int * dp = new int[11];

    int test;
    cin >> test;

    dp[0] = 1;
    dp[1] = 2;
    dp[2] = 4;

    for(int i = 3; i < 11; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }

    int num;

    for(int i = 0; i < test; i++)
    {
        cin >> num;

        cout << dp[num-1] << "\n";
    }
   
    return 0;
}
