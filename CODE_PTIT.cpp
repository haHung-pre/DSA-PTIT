#include <bits/stdc++.h>
using namespace std;

int n, a[100];

void ql(int i)
{
   if (n - i + 1 <= 0)
      return;

   cout << "[";
   for (int j = 1; j <= n - i + 1; j++)
   {
      cout << a[j];
      if (j < n - i + 1)
         cout << " ";
   }
   cout << "]" << endl;

   for (int j = 1; j < n - i + 1; j++)
   {
      a[j] = a[j] + a[j + 1];
   }

   ql(i + 1);
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

      ql(1);
   }
}
