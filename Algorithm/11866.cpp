#include <iostream>
#include <queue>
#include <string>

using namespace std;

int sol11866()
{
   queue<int> People;

    int N, K;

    cin >> N >> K;

    for(int i = 0; i < N; i++)
    {
        People.push(i + 1);
    }

    cout << "<";

    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < K-1; j++)
        {
            People.push(People.front());
            People.pop();
        }

        cout << People.front();

        if(i < N - 1)
        {
            cout <<", ";
        }
        People.pop();
    }

    cout << ">";

    return 0;
}
