#include <bits/stdc++.h>
using namespace std;
int main()
{
int sum;
int n=3;
int m=3;
int a[n][m];
int b[n][m];
int i,j,k;
for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << "a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
	}
for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            b[i][j] = a[i][j];
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            for (k = j + 1; k < n; k++)
                if (a[i][j] == a[i][k]) {
                    b[i][j] = (a[i][j] + a[j][i]) / 2;
                    b[i][k] = (a[i][k] + a[k][i]) / 2;
                }
        }


for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
for(int i=0;i<n;i++)
for(int j=0;j<m;j++)
{if(i==j)
sum+=a[i][j];
}
tbc= sum:m



return 0;
}

