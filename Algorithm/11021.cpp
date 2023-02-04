#include <iostream>
#include <algorithm>

using namespace std;

int sol11021()
{
    int num;
    cin >> num;

    int * arr = new int[num];
    
    for (int i = 0; i < num; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[i] = x+y;
    }

    for (int i = 0; i < num; i++)
    {
        cout << "Case #" << i+1 << ": " << arr[i] << "\n";
    }

    return 0;
}
