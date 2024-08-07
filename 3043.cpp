#include <bits/stdc++.h>
using namespace std;
int a[21][21];
int main()
{
	int n;
	cin >> n;
	for (int i = 0;i < n;i++)
	{
		a[n - i - 1][i] = i % 2;
	}
	for (int i = 0;i < n;i++)
	{
		int j = n - i - 1;
		while (j != -1)
		{
			a[j][i] = a[n - i - 1][i];
			j--;
		}
		j = n - i - 1;
		while (j != n)
		{
			a[i][j] = a[n - i - 1][i];
			j++;
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