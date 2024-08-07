#include <bits/stdc++.h>
using namespace std;
int a[100][100];
int main()
{
	int n;
	cin >> n;
	for (int c = 1;c <= (n + 1) / 2;c++)
	{
		for (int i = 0;i < n;i++)
		{
			for (int j = 0;j < n;j++)
			{
				if ((i >= c - 1 && i <= n - c) && (j >= c - 1 && j <= n - c) && (i == c - 1 || i == n - c || j == c - 1 || j == n - c)) a[i][j] = c;
			}
		}
	}
	
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < n;j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}