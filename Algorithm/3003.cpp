﻿#include <iostream>

using namespace std;

int sol3003()
{
    int piece[6] = {1   , 1, 2, 2, 2, 8};

    for(int i = 0; i < 6; i++)
    {
        int check;
        cin >> check;

        cout << piece[i] - check << " ";
       
    }

    return 0;
}
