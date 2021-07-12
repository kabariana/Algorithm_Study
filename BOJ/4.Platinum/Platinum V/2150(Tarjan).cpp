// SCC 문제 코사라주로 풀었으니 타잔도 점검
#include <bits/stdc++.h>

int v, e;
std::vector<std::vector<int>> graph, res;
std::vector<int> d;
std::vector<bool> complete;
std::stack<int> S;
int cnt;

// 타잔은 DFS 한 번만
int DFS(int n)
{
    d[n] = ++cnt;
    S.push(n);

    int tmp = d[n];

    for(auto i : graph[n])
    {
        if(d[i] == 0)
            tmp = std::min(tmp, DFS(i));
        else if(!complete[i])
            tmp = std::min(tmp, d[i]);
    }

    // 최대 조상이 자기 자신일 때
    if(tmp == d[n])
    {
        std::vector<int> SCC;

        while(true)
        {
            int l = S.top();
            S.pop();
            SCC.push_back(l);
            complete[l] = true;
            if(l == n)
                break;
        }
        res.push_back(SCC);
    }
    return tmp;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> v >> e;

    graph.resize(v + 1);
    d.resize(v + 1);
    complete.resize(v + 1);

    for(int i = 0; i < e; i++)
    {
        int start, end;
        std::cin >> start >> end;

        graph[start].push_back(end);
    }

    for(int i = 1; i<=v; i++)
        if(d[i] == 0)
            DFS(i);

    std::cout << res.size() << '\n';

    for(int i = 0; i<res.size(); i++)
        std::sort(res[i].begin(), res[i].end());
    std::sort(res.begin(), res.end());

    for(int i = 0; i<res.size(); i++)
    {
        for(int j = 0; j<res[i].size(); j++)
            std::cout << res[i][j] << ' ';
        std::cout << "-1\n";
    }
    return 0;
}