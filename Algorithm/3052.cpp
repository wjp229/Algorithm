#include <iostream>

using namespace std;

int main()
{
    bool arr[42] = {false};
    int cnt = 0;
    
    
    for(int i = 0; i < 10; i++)
    {
        int num;
        cin >> num;

        num %= 42;

        cout << " - " << num << endl;
        
        if(!arr[num])
        {
            cnt++;
            arr[num] = true;
        }
    }

   cout << cnt;
    
    return 0;
}