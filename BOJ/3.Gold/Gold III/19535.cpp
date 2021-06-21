#include <bits/stdc++.h>

std::vector<int> adj[300030];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int n, u, v;
    std::cin >> n;
    for(int i = 0; i < n-1; i++)
    {
        std::cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    long long dCnt = 0, gCnt = 0;

    for(int i = 1; i<=n; i++)
    {
        long long tmp = 0;
        for(auto j : adj[i])
            tmp += ((int)adj[i].size()-1) * ((int)adj[j].size()-1);
        dCnt += tmp;
        if(adj[i].size() >= 3)
        {
            long long degree = adj[i].size();
            gCnt += degree * (degree-1) / 2 * (degree-2) / 3;
        }
    }
    dCnt /= 2;
    if(dCnt > 3*gCnt)
        std::cout << "D\n";
    else if(dCnt < 3*gCnt)
        std::cout << "G\n";
    else
        std::cout << "DUDUDUNGA\n";
    return 0;
}