#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int sol2470()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin >> N;

    vector<int> Water;
    int* answer = new int[2];
    
    for(int i = 0; i < N; i++)
    {
        int NewWater;
        cin >> NewWater;
        Water.push_back(NewWater);
    }

    sort(Water.begin(), Water.end());

    int start = 0;
    int end = N - 1;

    int min = 2000000000; 
    
    while (start < end)
    {
        int sum = Water[start] + Water[end];

        if(abs(sum) < min)
        {
            min = abs(sum);
            answer[0] = Water[start];
            answer[1] = Water[end];

            if(sum == 0)
            {
                break;
            }
        }

        if(sum < 0)
            start++;
        else
            end--;
    }

    cout << answer[0] << " " << answer[1];
    
    return 0;
}

