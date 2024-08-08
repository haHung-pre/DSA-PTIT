#include <bits/stdc++.h>
using namespace std;

int N;
int maze[10][10];
vector<string> paths;

bool isValidMove(int x, int y, vector<vector<bool>> &visited)
{
   return (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && !visited[x][y]);
}

void findPaths(int x, int y, vector<vector<bool>> &visited, string path)
{
   if (x == N - 1 && y == N - 1)
   {
      paths.push_back(path);
      return;
   }

   visited[x][y] = true;

   // Move Down
   if (isValidMove(x + 1, y, visited))
   {
      findPaths(x + 1, y, visited, path + "D");
   }

   // Move Right
   if (isValidMove(x, y + 1, visited))
   {
      findPaths(x, y + 1, visited, path + "R");
   }

   visited[x][y] = false;
}

int main()
{
   int T;
   cin >> T;
   while (T--)
   {
      cin >> N;
      for (int i = 0; i < N; ++i)
      {
         for (int j = 0; j < N; ++j)
         {
            cin >> maze[i][j];
         }
      }

      paths.clear();
      if (maze[0][0] == 1 && maze[N - 1][N - 1] == 1)
      {
         vector<vector<bool>> visited(N, vector<bool>(N, false));
         findPaths(0, 0, visited, "");
      }

      if (paths.empty())
      {
         cout << -1 << endl;
      }
      else
      {
         sort(paths.begin(), paths.end());
         for (const string &path : paths)
         {
            cout << path << endl;
         }
      }
   }
   return 0;
}
