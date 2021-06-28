#include <bits/stdc++.h>

int parents[1000001];

int find(int x)
{
    if(parents[x] == x)
        return x;
    return parents[x] = find(parents[x]);
}

void _union(int x, int y)
{
    int px = find(x);
    int py = find(y);

    if(px > py)
        parents[px] = py;
    else if(px < py)
        parents[py] = px;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i<=n; i++)
        parents[i] = i;
    
    for(int i = 0; i < m; i++)
    {
        int op, a, b;
        std::cin >> op >> a >> b;

        if(op == 0)
            _union(a, b);
        else
        {   
            if(find(a) == find(b))
                std::cout << "YES\n";
            else
                std::cout << "NO\n";
        }
    }
    return 0;
}