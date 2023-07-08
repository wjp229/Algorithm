#include <iostream>

using namespace std;

int sol1912()
{
    int N;
	
    cin >> N;

    int *num = new int[N];
    int max = 0;
    int stackRes = 0;
    
    for (int tmp = 0; tmp < N; tmp++)
    {
        cin >> num[tmp];
    }

    for (int tmp = 0; tmp < N; tmp++)
    {
        if(num[tmp] < 0)
        {
            stackRes = 0;
            continue;
        }
        
        stackRes += num[tmp];

        cout << "STACK: " << stackRes << endl;
        
        if(max < stackRes)
        {
            max = stackRes;
            cout << "MAX: " << max << endl;
        }
    }
    cout << max << endl;

    return 0;
}
