#include <bits/stdc++.h>
using namespace std;
int n;
string s;
string v[100];
char x[15];
void xuly()
{
  v[2] = "abc";
  v[3] = "def";
  v[4] = "ghi";
  v[5] = "jkl";
  v[6] = "mno";
  v[7] = "pqrs";
  v[8] = "tuv";
  v[9] = "wxyz";
}
void ql(int i, string res)
{
  int num = s[i] - '0';
  for (char c : v[num])
  {
    x[i] = c;
    if (i == n)
    {
      cout << res + c << " ";
    }
    else
      ql(i + 1, res + c);
  }
}
int main()
{
  xuly();
  cin >> s;
  sort(s.begin(), s.end());
  n = s.length();
  s = "0" + s;
  string tmp = "";
  ql(1, tmp);
}
