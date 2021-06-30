// MST 최소 스패닝 트리, 크루스칼
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

const int SIZE = 1e5;
int N, res;
int parents[SIZE + 1];

std::vector<pii> X, Y, Z;
std::vector<std::tuple<int, int, int>> star;

int find(int x)
{
    if(x == parents[x])
        return x;
    return parents[x] = find(parents[x]); 
}

bool _union(int x, int y)
{
    int px = find(x);
    int py = find(y);

    if(px == py)
        return false; // 사이클이 생김
    else
    {
        parents[px] = py;
        return true;
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);\

    std::cin >> N;

    for(int i = 0; i<= N; i++)
        parents[i] = i;

    for(int i = 0; i< N; i++)
    {
        int x, y, z;
        std::cin >> x >> y >> z;
        X.push_back({x, i});
        Y.push_back({y, i});
        Z.push_back({z, i});
    }

    std::sort(X.begin(), X.end());
    std::sort(Y.begin(), Y.end());
    std::sort(Z.begin(), Z.end());

    for(int i = 0; i < N-1; i++)
    {
        star.push_back({X[i+1].first-X[i].first, X[i].second, X[i+1].second});
        star.push_back({Y[i+1].first-Y[i].first, Y[i].second, Y[i+1].second});
        star.push_back({Z[i+1].first-Z[i].first, Z[i].second, Z[i+1].second});
    }

    std::sort(star.begin(), star.end());

    for(int i = 0; i<star.size(); i++)
    {
        int d = std::get<0>(star[i]);
        int u = std::get<1>(star[i]);
        int v = std::get<2>(star[i]);

        if(_union(u, v))
            res += d;
    }
    std::cout << res << '\n';
    return 0;
}