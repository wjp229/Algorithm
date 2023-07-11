#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int BinSearch(int* Array, int Size, int Target)
{
    int Start = 0, End = Size -1;

    
    while(End >= Start)
    {
        int mid = (Start + End) / 2;

        if(Array[mid] == Target)
        {
            return 1;
        }
        if(Array[mid] < Target)
        {
            Start = mid+1;
        }
        else if(Array[mid] > Target)
        {
            End = mid -1;
        }
    }

    return 0;
}

int sol1920()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int N;
    cin >> N;

    int* A = new int[N];
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    sort(A, A+N);

    // for(int i = 1; i < N + 1; i++)
    // {
    //     for(int j = 2; j < N+2-i; j++)
    //     {
    //         if(A[j-1] > A[j])
    //         {
    //             int tmp = A[j-1];
    //             A[j-1] = A[j];
    //             A[j] = tmp;
    //         }
    //     }
    // }

    int M;
    cin >> M;

    for(int i = 0; i < M; i++)
    {
        int C;
        cin >> C;

        cout << BinSearch(A, N, C) << '\n';
    }

    return 0;
}
