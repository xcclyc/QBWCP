/*
“N”字上的数有 9、2、3、1、3、1、1、0、6、4。
9 7 3 4
2 3 2 6
3 2 1 0
1 1 1 1
这些元素的和 = 9 + 2 + 3 + 1 + 3 + 1 + 1 + 0 + 6 + 4 = 30 。
*/

#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main()
{
    int n;
    cin >> n;
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < n;j++)
        {
            cin >> a[i][j];
        }
    }
    int h = 0;
    for (int i = 0;i < n;i++) h += a[i][0];
    for (int i = 0;i < n;i++) h += a[i][n - 1];
    for (int i = 1;i < n - 1;i++) h += a[i][i];
    cout << h;
    return 0;
}
