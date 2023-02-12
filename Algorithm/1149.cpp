#include <iostream>

using namespace std;

int Min(int a, int b)
{
    return a < b ? a : b;
}

int sol1149()
{
    int num = 0;

    cin >> num;

    int house[1001][3] = {0};
    int res[1001][3] = {0};

    for (int i = 1; i <= num; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> house[i][j];
        }
    }
    
    for(int i = 1; i <= num; i++)
    {
        res[i][0] = Min(res[i-1][1], res[i-1][2]) + house[i][0];
        res[i][1] = Min(res[i-1][0], res[i-1][2]) + house[i][1];
        res[i][2] = Min(res[i-1][0], res[i-1][1]) + house[i][2];
    }

    int result = Min(res[num][2], Min(res[num][0], res[num][1]));

    cout << result << endl;

    return 0;
}
