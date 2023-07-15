#include <iostream>

using namespace std;

int Plate[16][16];
int PlateSize;
int QueenCnt;
int SumRes;

void InitPlate()
{
    for(int i = 1; i <= PlateSize; i++)
    {
        for(int j = 1; j <= PlateSize; j++)
        {
            Plate[i][j] = 0;
        }
    }
}

void CheckQueen(int X, int Y, int TempP[16][16], int Count)
{
    // cout << SumRes << '\n';
    if(Count == PlateSize)
    {
        SumRes++;

        return;
    }
    
    int Temp[16][16];
    for(int i = 1; i <= PlateSize; i++)
    {
        for(int j = 1; j <= PlateSize; j++)
        {
            Temp[i][j] = TempP[i][j];
            // cout <<  i << ", " << j << ": " << Temp[i][j] << "\n";
        }
    }

    Temp[X][Y] = 1;
    
    for (int i = 1; i <= PlateSize; i++)
    {
        Temp[X][i] = 1;
        Temp[i][Y] = 1;
        if((i+X >= 0) && (i+X) <= PlateSize && (i+Y) >= 0 && (i+Y) <= PlateSize) Temp[i+X][i+Y] = 1;
        if((X-i >= 0) && (X-i) <= PlateSize && (Y-i) >= 0 && (Y-i) <= PlateSize) Temp[X-i][Y-i] = 1;
        if((i-X >= 0) && (i-X) <= PlateSize && (i+Y) >= 0 && (i+Y) <= PlateSize) Temp[X-i][i+Y] = 1;
        if((X+i >= 0) && (X+i) <= PlateSize && (Y-i) >= 0 && (Y-i) <= PlateSize) Temp[X+i][Y-i] = 1;
    }

    cout << Count << ": " << SumRes << '\n';
    for(int i = 1; i <= PlateSize; i++)
    {
        for(int j = 1; j <= PlateSize; j++)
        {
            cout << Temp[i][j];
        }
        cout << "\n";
    }
    cout << "\n";


    for(int i = 1; i <= PlateSize; i++)
    {
        for(int j = 1; j <= PlateSize; j++)
        {
            if(Temp[i][j] != 1)
            {
                CheckQueen(i, j, Temp, Count+1);
            }
        }
    }
}

int uuuu()
{
    cin >> PlateSize;


    for(int i = 1; i <= PlateSize; i++)
    {
        for(int j = 1; j <= PlateSize; j++)
        {
            // Init Plate
            InitPlate();

            // Place First Queen
            Plate[i][j] = 1;
            QueenCnt = 1;

            // Fill unabled Queen
            CheckQueen(i, j, Plate, 1);
        }
    }

    cout << SumRes;
    // If N is last add sum

    return 0;
}
