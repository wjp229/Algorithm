#include <algorithm>
#include <iostream>
#include <stack>
#include <string>

using namespace std;


int sol1541()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string Input;
    cin >> Input;

    int res = 0;

    int Cnt = 0;
    
    int StackNum = 0;

    bool bIsMinus = false;
    
    while(Cnt < Input.length())
    {
        // Check Next Is Number
        if(Input[Cnt] >= '0' && Input[Cnt] <= '9')
        {
            StackNum *= 10;
            StackNum += Input[Cnt] - '0';
        }
        // Check have Minus
        else if(Input[Cnt] == '-')
        {
            if(!bIsMinus) res += StackNum;
            else res -= StackNum;

            bIsMinus = true;
            StackNum = 0;
        }
        // Check Is Plus
        else if(bIsMinus && Input[Cnt] == '+')
        {
            res -= StackNum;
            StackNum = 0;
        }
        else if(Input[Cnt] == '+')
        {
            res += StackNum;
            StackNum = 0;
        }

        // Last Number
        if(Cnt == Input.length() - 1)
        {
            if(bIsMinus) res -= StackNum;
            else if(!bIsMinus) res += StackNum;
        }
        
        Cnt++;
    }
    
    cout << res;

    return 0;
}
