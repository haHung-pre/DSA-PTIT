#include <bits/stdc++.h>

using namespace std;

int n, k;
string x[16], a[31];

void ql(int i, int bd)
{
   for (int j = bd; j <= n - k + i; j++)
   {
      x[i] = a[j];
      if (i == k)
      {
         for (int i = 1; i <= k; ++i)
            cout << x[i] << " ";
         cout << endl;
      }
      else
         ql(i + 1, j + 1);
   }
}

int main()
{
   cin >> n >> k;
   set<string> st;
   string temp;
   while (n--)
   {
      cin >> temp;
      st.insert(temp);
   }

   int c = 0;
   for (string s : st)
   {
      c++;
      a[c] = s;
   }
   n = c;

   ql(1, 1);
}