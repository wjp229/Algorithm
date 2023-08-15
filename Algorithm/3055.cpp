#include <iostream>
#include <queue>

using namespace std;

typedef struct
{
   int x, y;
   int cnt;
} HedgeType;

int main()
{
   int hedgedx[4] = { -1, 1, 0, 0};
   int hedgedy[4] = { 0, 0, -1, 1};

   int R, C;
   cin >> R >> C;

   char** HedgeMap = new char*[R];

   queue<HedgeType> hedgeQueue;
   int** VisitedMap = new int*[R];

   queue<HedgeType> waterQueue;
   int** VisitedWater = new int*[R];

   int answer = 10000000;

   bool findFlag = false;
   
   for(int i = 0; i < R; i++)
   {
      HedgeMap[i] = new char[C];
      
      VisitedMap[i] = new int[C];
      VisitedWater[i] = new int[C];
      
      for(int j = 0; j < C; j++)
      {
         cin >> HedgeMap[i][j];
         VisitedMap[i][j] = 0;
         VisitedWater[i][j] = -1;
         
         if(HedgeMap[i][j] == 'S')
         {
            hedgeQueue.push({i, j, 0});
         }
         else if(HedgeMap[i][j] == '*')
         {
            waterQueue.push({i,j,0});
            VisitedWater[i][j] = 0;
         }
      }
   }
   while(!waterQueue.empty())
   {
      HedgeType head = waterQueue.front();
      waterQueue.pop();

      for(int ix = 0; ix < 4; ix++)
      {
         int nx = head.x + hedgedx[ix];
         int ny = head.y + hedgedy[ix];

         if(nx >= 0 && nx < R && ny >= 0 && ny < C && VisitedWater[nx][ny] == -1 && HedgeMap[nx][ny] != 'X' && HedgeMap[nx][ny] != 'D')
         {
            waterQueue.push({nx, ny, head.cnt+1});
            VisitedWater[nx][ny] = head.cnt+1;
         }
      }
   }

   while(!hedgeQueue.empty())
   {
      HedgeType head = hedgeQueue.front();
      hedgeQueue.pop();
      
      for(int ix = 0; ix < 4; ix++)
      {
         int nx = head.x + hedgedx[ix];
         int ny = head.y + hedgedy[ix];

         if(nx >= 0 && nx < R && ny >= 0 && ny < C && VisitedMap[nx][ny] == 0 )
         {
            if(VisitedWater[nx][ny] == -1 || VisitedWater[nx][ny] > head.cnt + 1)
            {
               if(HedgeMap[nx][ny] == '.')
               {
                  hedgeQueue.push({nx, ny, head.cnt+1});
                  VisitedMap[nx][ny] = 1;
               }
               else if(HedgeMap[nx][ny] == 'D')
               {
                  findFlag = true;
                  answer = min(answer, head.cnt+1);
               }
            }
         }
      }
   }
   
   if(findFlag)
      cout << answer;
   else
   {
      cout << "KAKTUS";
   }
    
   return 0;
}

