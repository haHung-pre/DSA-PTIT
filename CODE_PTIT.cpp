C1:#include <bits/stdc++.h>
using namespace std;

int a[100][100], n;
bool check;

void in()
{
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
      for (int j = 1; j <= n; j++)
      {
         cin >> a[i][j];
      }
   }
}

void Try(int i, int j, string s)
{
   if (!a[1][1])
      return;
   if (i == n && j == n)
   {
      check = true;
      cout << s << ' ';
      return;
   }

   if (i + 1 <= n && a[i + 1][j])
   {
      s += 'D';
      a[i + 1][j] = 0;
      Try(i + 1, j, s);

      a[i + 1][j] = 1;
      s.pop_back();
   }

   if (j + 1 <= n && a[i][j + 1])
   {
      s += 'R';
      a[i][j + 1] = 0;
      Try(i, j + 1, s);

      a[i][j + 1] = 1;
      s.pop_back();
   }
}
int main()
{

   int test;
   cin >> test;
   while (test--)
   {
      in();
      check = false;
      Try(1, 1, "");
      if (!check)
         cout << -1;
      cout << endl;
   }
}





C2:#include <bits/stdc++.h>
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
