#include <iostream>

using namespace std;

int sol11279()
{

    cin.tie(0);
    cin.sync_with_stdio(0);
    
    int N;

    cin >> N;

    int* Heap = new int[N];
    int top = 0;

    for(int i = 0; i < N; i++)
    {
        int x;
        cin >> x;

        if(x == 0)
        {
            if(top == 0)
            {
                cout <<0 << "\n";
            }
            else
            {
                cout << Heap[--top] << "\n";
            }
        }
        else
        {
            Heap[top++] = x;

            for(int i = top - 1; i >= 1; i--)
            {
                if(Heap[i] < Heap[i-1])
                {
                    int tmp = Heap[i];
                    Heap[i] = Heap[i-1];
                    Heap[i-1] = tmp;
                }
                else
                {
                    break;
                }
            }
        }
    }
    
    return 0;
}

