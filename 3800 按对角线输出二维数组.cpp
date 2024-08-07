#include <bits/stdc++.h>
using namespace std;
int a[20][20];
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0;i < m;i++)
    {
        for (int j = 0;j < n;j++)
        {
           cin >> a[i][j];
        }
    }
    for (int k = 0;k < n + m - 1;k++)
    {
        for (int i = 0;i < n;i++)
        {
            int j = k - i;
            if (j < 0 || j >= m) continue;
            cout << a[j][i] << " ";
        }
    }
}