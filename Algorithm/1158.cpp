#include <iostream>

using namespace std;

int unsolved1158()
{
    int n, k;
    cin >> n >> k;

    int * arr = new int[n];

    for(int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    
    int cnt = 0;

    cout << "<";

    int res = 0;
    
    while(cnt != n)
    {
        int target = k + res;
        
        for(int i = res; i < target; i++)
        {
            if(arr[i] == -1)
            {
                target++;
            }

            res = i;
        }

        arr[res] = -1;
        cout << ", " << res + 1;
    }

    cout << ">";
    
    
    return 0;
}
