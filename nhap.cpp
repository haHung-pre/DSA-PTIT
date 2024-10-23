#include <bits/stdc++.h>
using namespace std;

int n, a[20];
vector<vector<int>> v;
   vector<int> tmp;
void ql(int i) {
    if (n - i + 1 < 1) return;
	
 tmp.clear();
    for (int j = 1; j <= n - i + 1; j++) {
        tmp.push_back(a[j]);
    }
    v.push_back(tmp);  // Store the sequence in v

    for (int j = 1; j < n - i + 1; j++) {
        a[j] = a[j] + a[j + 1];  // Update a[] for the next level
    }

    ql(i + 1);  // Recursively process the next level
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        v.clear();  // Clear v for each test case

        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        ql(1);  // Start processing

        // Output all sequences stored in v
        for (auto it : v) {
            cout << "[";
            for (int i = 0; i < it.size(); i++) {
                cout << it[i];
                if (i < it.size() - 1) cout << " ";
            }
            cout << "] "<<endl;
        }
    }
}

