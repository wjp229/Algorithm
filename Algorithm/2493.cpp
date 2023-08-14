#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int N;
stack<int> tower;

int unsol2493()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    stack<int> answer;
    
    cin >> N;

    for(int ix = 0; ix < N; ix++)
    {
        int TowerLength;
        cin >> TowerLength;
        tower.push(TowerLength);
    }

    
    for(int ix = N-1; ix >= 1; ix--)
    {
        stack<int> tmpStack;

        bool findFlag = 0;
        
        int curTower = tower.top();
        tower.pop();
        
        for(int jx = ix - 1; jx >= 0; jx--)
        {
            int targetTower = tower.top();
            tower.pop();
            tmpStack.push(targetTower);

            if(targetTower > curTower)
            {
                answer.push(jx+1);
                findFlag = 1;

                break;
            }
        }

        if(!findFlag)
        {
            answer.push(0);
        }

        int cnt = tmpStack.size();
        for(int jx = 0; jx < cnt; jx++)
        {
            tower.push(tmpStack.top());
            tmpStack.pop();
        }
    }

    cout << 0 << ' ';

    for(int ix = 0; ix < N - 1; ix++)
    {
        cout << answer.top() << ' ';
        answer.pop();
    }
    
    return 0;
}
