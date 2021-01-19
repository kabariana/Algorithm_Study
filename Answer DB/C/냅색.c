#include <stdio.h>
#define MAX(a, b) (((a) > (b)) ? (a) : (b))

struct item{
	int weight;
	int value;
};

int val[21][21];
struct item arr[21];

int main()
{
	int n, k;
	scanf("%d", &n);
	
	for(int i = 1; i<=n; i++)
	{
		int w, v;
		scanf("%d %d", &w, &v);
		arr[i].weight = w;
		arr[i].value = v;
	}
	
	scanf("%d", &k);
	
	for(int i = 1; i<= n; i++)
	{
		for(int j = 1; j<=k; j++)
		{
			int _w = arr[i].weight;
			int _v = arr[i].value;
			
			if(_w>j)
				val[i][j] = val[i-1][j];
			else
				val[i][j] = MAX(val[i-1][j], _v+val[i-1][j-_w]);
		}
	}
	printf("%d", val[n][k]);
	return 0;
}
