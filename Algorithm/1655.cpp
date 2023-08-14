#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    priority_queue<int> MaxQueue;
    priority_queue<int, vector<int>, greater<int>> MinQueue;

    int N;
    cin >> N;
    vector<int> tmpVector;
    tmpVector.resize(N);

    for(int i = 0; i < N; i++)
    {
        cin >>  tmpVector[i];
    }

    for(int i = 0; i < N; i++)
    {
        if(MaxQueue.size() > MinQueue.size()) MinQueue.push(tmpVector[i]);
        else MaxQueue.push(tmpVector[i]);

        if(!MaxQueue.empty() && !MinQueue.empty())
        {
            if(MaxQueue.top() > MinQueue.top())
            {
                int a = MaxQueue.top();
                MaxQueue.pop();
                int b = MinQueue.top();
                MinQueue.pop();

                MaxQueue.push(b);
                MinQueue.push(a);
            }
        }

        cout << MaxQueue.top() << '\n';
    }
    
    return 0;
}

