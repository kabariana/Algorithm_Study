// Kruskal
// MST 1개 만들고, 가장 큰 간선 제거 -> 최소한의 비용으로 2개의 마을 생성
#include <bits/stdc++.h>

std::vector<std::pair<int, std::pair<int, int>>> graph;
std::vector<int> parents;
int N, M;

int find(int x)
{
    if(x == parents[x])
        return x;
    return parents[x] = find(parents[x]);
}

void _union(int x, int y)
{
    int px = find(x);
    int py = find(y);

    if(px < py)
        parents[py] = px;
    else
        parents[px] = py;
}

int kruskal()
{
    int biggest = 0;
    int sum = 0;

    for(int i = 0; i < graph.size(); i++)
    {
        int a = graph[i].second.first;
        int b = graph[i].second.second;
        int c = graph[i].first;

        if(find(a) == find(b))
            continue; // 사이클
        _union(a, b);
        sum +=c; 
        biggest = c;
    }
    return sum - biggest;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    parents.resize(N + 1);
    
    for(int i = 1; i<= N; i++)
        parents[i] = i;

    for(int i = 0; i<M; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        graph.push_back({c, {a, b}});
    }
    std::sort(graph.begin(), graph.end());
    std::cout << kruskal() << '\n';
    return 0;
}