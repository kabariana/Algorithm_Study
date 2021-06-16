#include <bits/stdc++.h>

int parent[101];
std::vector<std::pair<double, double>> v;
std::vector<std::tuple<double, int, int>> distance;

int find(int t)
{
    if(parent[t] == t) 
        return t;
    else
        return parent[t] = find(parent[t]);
}

bool _union(int u, int v)
{
    u = find(u);
    v = find(v);

    if(u == v)  
        return false;
    else
    {
        parent[u] = v;
        return true;
    }
}

double getDist(double x1, double y1, double x2, double y2)
{
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;

    deltaX *= deltaX;
    deltaY *= deltaY;

    return std::sqrt(deltaX + deltaY);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n;
    std::cin >> n;
    double x, y, d;
    for(int i = 1; i<=n; i++)
        parent[i] = i;

    v.push_back({0, 0});
    for(int i = 1; i<= n; i++)
    {
        std::cin >> x >> y;
        v.push_back({x, y});
    }

    for(int i= 1; i<= n-1; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            double tmp = getDist(v[i].first, v[i].second, v[j].first, v[j].second);
            distance.push_back({tmp, i, j});
        }
    }

    std::sort(distance.begin(), distance.end());

    double res = 0;
    for(int i = 0; i < distance.size(); i++)
    {
        d = std::get<0>(distance[i]);
        x = std::get<1>(distance[i]);
        y = std::get<2>(distance[i]);

        if(_union(x, y))
            res += d;
    }
    std::cout << std::fixed << std::setprecision(2) << res << '\n';
    return 0;
}