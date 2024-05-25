#include <iostream>
#define n 4
#define INF 99999
using namespace std;

void floydwarshall(int g[][n])
{
	int i, j ,k ;
	for (k=0;k<n;k++)
	{
		for (i=0; i<n;i++)
		{
			for (j=0;j<n; j++)
			{
				if ((g[i][k]+g[k][j]) < g[i][j])
				{
					g[i][j]=g[i][k]+g[k][j];
				}
			}
		}
	}
	for (i=0; i<n;i++)
		{
			for (j=0;j<n; j++)
			{
				if ( g[i][j]=99999)
				{
					cout << "INF\t" ;
				}
				else 
				{
					cout << g[i][j] << "\t";
				}
			}
		} 
}

int main()
{
	int g[n][n]
	{
		{ 7, 5, INF, INF},
		{ 7, INF, INF, INF},
		{ INF,3, INF, INF},
		{ 4, INF, 1, INF}
	};
	floydwarshall(g);
}
