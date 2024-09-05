NOTICE:#include<bits/stdc++.h>
using namespace std;
int n, a[100];
void ql(int i){
   if (n-i+1<= 0)
      return;
   cout << "[";
   for (int j = 1;j<=n-i+1;j++){
      cout<<a[j];
      if (j<n-i+1)
         cout<<" ";
   }
   cout<< "]"<<endl;
   for (int j=1;j<n-i+1;j++){
      a[j]=a[j]+a[j + 1];
   }
   ql(i + 1);
}
int main(){
   int t;cin>>t;
   while(t--){
      cin>>n;
      for(int i = 1; i <= n; i++){
         cin>>a[i];
      }
      ql(1);
   }
}
C2:#include <bits/stdc++.h>
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

      for (int i = 0; i <= v.size() - 1; i++)
      {
         cout << "[";
         for (int j = 0; j < v[i].size(); j++)
         {
            cout << v[i][j];
            if (j < v[i].size() - 1)
               cout << " ";
         }
         cout << "]" << endl;
      }
      }
}
C3:#include <bits/stdc++.h>
using namespace std;

int n, a[100];
int b[100][100]; // Mảng hai chiều để lưu các hàng của tam giác
int c[100];      // Mảng để lưu kích thước của từng hàng

void check()
{
   int row = 0;         // Chỉ số hàng hiện tại
   int currentSize = n; // Kích thước hiện tại của tam giác
   int tempA[100];      // Mảng tạm để giữ giá trị của a

   // Lưu bản sao của mảng a
   copy(a, a + n + 1, tempA);

   // Tạo hàng đầu tiên của tam giác
   for (int i = 1; i <= currentSize; i++)
   {
      b[row][i - 1] = tempA[i];
   }
   c[row] = currentSize;
   row++;

   while (currentSize > 1)
   {
      // Tính hàng tiếp theo
      for (int j = 1; j < currentSize; j++)
      {
         tempA[j] = tempA[j] + tempA[j + 1];
      }
      currentSize--;

      // Tạo hàng mới và lưu vào mảng b
      for (int j = 1; j <= currentSize; j++)
      {
         b[row][j - 1] = tempA[j];
      }
      c[row] = currentSize;
      row++;
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

      // In kết quả từ trên xuống dưới
      for (int i = 0; i < n; i++)
      {
         if (c[i] == 0)
            continue; // Bỏ qua hàng trống
         cout << "[";
         for (int j = 0; j < c[i]; j++)
         {
            cout << b[i][j];
            if (j < c[i] - 1)
               cout << " ";
         }
         cout << "]" << endl;
      }
   }
   return 0;
}
C4:#include <bits/stdc++.h>
using namespace std;

int n, a[100];
int triangle[100][100]; // Mảng hai chiều để lưu các hàng của tam giác
int size[100];          // Mảng để lưu kích thước của từng hàng

void check()
{
   int rowIndex = 0; // Chỉ số hàng hiện tại

   // Tạo hàng đầu tiên của tam giác
   for (int i = 1; i <= n; i++)
   {
      triangle[rowIndex][i - 1] = a[i];
   }
   size[rowIndex] = n;
   rowIndex++;

   while (n > 1)
   {
      // Tính hàng tiếp theo
      for (int j = 1; j < n; j++)
      {
         a[j] = a[j] + a[j + 1];
      }
      n--;

      // Tạo hàng mới và lưu vào mảng triangle
      for (int j = 1; j <= n; j++)
      {
         triangle[rowIndex][j - 1] = a[j];
      }
      size[rowIndex] = n;
      rowIndex++;
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

      // In kết quả từ trên xuống dưới
      for (int i = 0; i < n; i++)
      {
         if (size[i] == 0)
            continue; // Bỏ qua hàng trống
         cout << "[";
         for (int j = 0; j < size[i]; j++)
         {
            cout << triangle[i][j];
            if (j < size[i] - 1)
               cout << " ";
         }
         cout << "]" << endl;
      }
   }
   return 0;
}
