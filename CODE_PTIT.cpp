#include <bits/stdc++.h>
using namespace std;

int n, s, c = 0, a[500], x[500], res = 1e9;

void ql(int i, int bd, int sum)
{
   for (int j = bd; j <= n; j++)
   {
      x[i] = a[j];
      if (sum + a[j] == s)
      {
         res = min(res, i);
      }
      else if (sum + a[j] < s)
      {
         ql(i + 1, j + 1, sum + a[j]);
      }
      else
      {
         return;
      }
   }
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      cin >> n >> s;
      for (int i = 1; i <= n; i++)
      {
         cin >> a[i];
      }
      sort(a + 1, a + n + 1);
      res = 1e9; // Reset res for each test case
      ql(1, 1, 0);
      if (res == 1e9)
         cout << -1;
      else
         cout << res;
      cout << endl; // Ensure new line for each test case output
   }
   return 0;
}
