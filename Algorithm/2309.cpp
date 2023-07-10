#include <iostream>
#include <string>
#include <list>

using namespace std;

int compare2(const void* a, const void* b)
{
    const int* x = (int*)a;
    const int* y = (int*)b;

    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;

    return 0;
}

int sol2309()
{
    int D = 9;

    int* Case = new int[D];
    int Total = 0;

    for (int i = 0; i < D; i++)
    {
        cin >> Case[i];
        Total += Case[i];
    }

    qsort(Case, D, sizeof(int), compare2);

    int* Answer = new int[7];

    int Remove1, Remove2;

    bool flag = false;
    
    for (int i = 0; i < D; i++)
    {
        if(flag)
            break;
        
        for (int j = i + 1; j < D; j++)
        {
            if(Total - Case[i] - Case[j] == 100)
            {
                Remove1 = i;
                Remove2 = j;
                flag = true;
            }
        }
    }

    for (int i = 0; i < D; i++)
    {
        if(i == Remove1 || i == Remove2)
            continue;
        cout << Case[i] << "\n";
    }

    return 0;
}
