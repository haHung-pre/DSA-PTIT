#include <bits/stdc++.h>
using namespace std;

int n, a[100];
vector<vector<int>> v;

void check()
{
   v.clear();

   vector<int> res(a + 1, a + n + 1);
   v.push_back(res);

   while (n > 1)
   {
      for (int j = 1; j < n; j++)
      {
         a[j] = a[j] + a[j + 1];
      }
      n--;

      res.clear();
      for (int j = 1; j <= n; j++)
      {
         res.push_back(a[j]);
      }
      v.push_back(res);
   }
}

int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      cin >> n;
      for (int i = 1; i <= n; i++)
      {
         cin >> a[i];
      }

      check();

      for (int i = v.size() - 1; i >= 0; i--)
      {
         cout << "[";
         for (int j = 0; j < v[i].size(); j++)
         {
            cout << v[i][j];
            if (j < v[i].size() - 1)
               cout << " ";
         }
         cout << "]" << " ";
      }
      cout << endl;
   }
}
