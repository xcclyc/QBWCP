#include <bits/stdc++.h>
using namespace std;
int a[55][55];
int main()
{
    int n;
    cin >> n;
    for (int p = 1;p <= (n + 1) / 2;p++)
    {
        for (int j = p;j <= n + 1 - p;j++)
        {
            a[p][j] = p;
            a[n + 1 - p][j] = p;
        }
        for (int j = p;j <= n + 1 - p;j++)
        {
            a[j][p] = p;
            a[j][n + 1 - p] = p;
        }
    }
    for (int i = 1;i <= n;i++)
    {
        for (int j = 1;j <= n;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}