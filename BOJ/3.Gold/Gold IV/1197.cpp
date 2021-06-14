#include <bits/stdc++.h>
#define MAX 10001

int parent[MAX];
int set[MAX];

struct Edge{
    int u, v, w;
    bool operator<(Edge const &e)
    {
        return w < e.w;
    }
};

int findParent(int node)
{
    if(node == parent[node])
        return node;
    return parent[node] = findParent(parent[node]);
}

void _union(int node1, int node2)
{
    node1 = findParent(node1);
    node2 = findParent(node2);

    if(node1 != node2)
    {
        if(set[node1] < set[node2])
            std::swap(node1, node2);
        
        parent[node2] = node1;
        set[node1] += set[node2];
        set[node2] = 0;
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int v, e;
    std::cin >> v >> e;

    std::vector<Edge> vEdge;
    for(int i = 0; i<e; i++)
    {
        int U, V, W;
        std::cin >> U >> V >> W;

        vEdge.push_back({U, V, W});
    }

    std::sort(vEdge.begin(), vEdge.end());

    for(int i = 0; i<v; i++)
    {
        parent[i] = i;
        set[i] = i;
    }

    long long res = 0;
    for(int i = 0; i<vEdge.size(); i++)
    {
        Edge tmp = vEdge[i];
        if(findParent(tmp.u) != findParent(tmp.v))
        {
            res += tmp.w;
            _union(tmp.u, tmp.v);
        }
    }
    std::cout << res << '\n';
    return 0;
}