// 플로이드 와샬 알고리즘
#include <bits/stdc++.h>
#define MAX 101

const int INF = 987654321;
int n, m, r;
int cnt, ans;
int graph[MAX][MAX];
int itemloc[MAX];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> n >> m >> r;

    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            if(i!=j)
                graph[i][j] = INF;

    for(int i = 1; i <= n; i++)
        std::cin >> itemloc[i];

    for(int i = 0; i<r; i++)
    {
        int a, b, l;
        std::cin >> a >> b >> l;
        graph[a][b] = l;
        graph[b][a] = l;
    }

    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                if(graph[i][k] + graph[k][j] < graph[i][j])
                    graph[i][j] = graph[i][k] + graph[k][j];


    for(int i = 1; i<=n; i++)
    {
        cnt = itemloc[i];
        for(int j = 0; j<=n; j++)
            if(i != j && graph[i][j] <= m)
                cnt+=itemloc[j];
        ans = std::max(ans, cnt);
    }
    std::cout << ans <<'\n';
    return 0;   
}