#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int cnt = n;
    int arr[5000000];

    for(int i = n; i >= 1; i--)
    {
        arr[i] = n - i + 1;
    }
    
    while(cnt != 1)
    {
        cnt--;
        arr[0] = arr[cnt];
        for(int i = cnt; i > 0; i--)
        {
            arr[i] = arr[i-1];
        }
    }

    cout << arr[1];
    
    return 0;
}
