#include <iostream>

using namespace std;

int sol2164()
{
    int n;
    cin >> n;

    int * arr = new int[n*3];

    int head = 0;
    int tail = n;

    for(int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }
    
    while((tail - head) != 1)
    {
        head++;
        arr[tail++] = arr[head++];
    }

    cout << arr[head];
    
    return 0;
}
