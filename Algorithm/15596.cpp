#include <complex.h>
#include <iostream>
#include <vector>

using namespace std;

int sol15596()
{
    
    return 0;
}

long long sum(std::vector<int> &a)
{
    int result = 0;

    for(int i = 0; i < a.size(); i++)
    {
        result += a.at(i);
    }

    return result;
    
}