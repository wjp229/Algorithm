#include <iostream>
#include <cmath>

using namespace std;

int Visit(int N, int r, int c) 
{
    int res = 0;

    if(N == 0)
    {
        return res;
    }

    int Size = pow(2, N);

    Size /= 2;
    
    // 4 사분면
    if(r >= Size && c >= Size)
    {
        res += Size * Size * 3 + Visit(N - 1, r - Size , c - Size);
    }
    else if(r >= Size)
    {
        res += Size * Size + Visit(N - 1, r - Size, c);
    }
    else if(c >= Size)
    {
        res += Size * Size * 2 + Visit(N - 1, r, c - Size);
    }
    else
    {
        res += Visit(N - 1, r, c);
    }

    return res;
}

int sol1074()
{
    int N, r, c;

    cin >> N >> r >> c;


    cout << Visit(N, c, r);
    
    return 0;
}
