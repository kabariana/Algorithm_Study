// 아무래도 Union Find 문제...?
#include <bits/stdc++.h>

int parent[500001];

int find(int x)
{
    if(parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}

void _union(int x, int y)
{
    int px = find(x);
    int py = find(y);

    if(px < py)     
        parent[py] = px;
    else
        parent[px] = py;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i <n; i++)
        parent[i] = i;
    
    for(int i = 1; i<=m; i++)
    {
        int a, b;
        std::cin >> a >> b;
        if(find(a) == find(b))
        {
            std::cout << i <<'\n';
            return 0;
        }
        _union(a, b);
    }
    std::cout << 0 <<'\n';
    return 0;
}