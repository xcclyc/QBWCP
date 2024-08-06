#include <bits/stdc++.h>
using namespace std;
int a[5][5];
int main()
{
    for (int i = 0;i < 5;i++)
    {
        for (int j = 0;j < 5;j++) cin >> a[i][j];
    }
    int m, n;
    cin >> m >> n;
    for (int i = 0;i < 5;i++) swap(a[n - 1][i], a[m - 1][i]);
    for (int i = 0;i < 5;i++)
    {
        for (int j = 0;j < 5;j++) cout << a[i][j] << " ";
        cout << endl;
    } 
}