#include <iostream>
#include <string>
#include <stack>

using namespace std;

int sol17608()
{
    int Case = 0;
    cin >> Case;

    stack<int> Bong;
    
    for(int i = 0; i < Case; i++)
    {
        int Length = 0;
        cin >> Length;
        
        if(Bong.empty())
        {
            Bong.push(Length);
        }

        while(!Bong.empty() && Bong.top() <= Length)
        {
            Bong.pop();
        }

        Bong.push(Length);
    }
    
    
    cout << Bong.size();

    return 0;
}
