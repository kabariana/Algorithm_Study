// 문제 이름 부터가 SCC 다.
// SCC를 푸는 방식에는 코사라주, 타잔 알고리즘이 있음
// 코사라주로 접근해보겠다.
// 코사라주로 성공하면 타잔도 해봄

#include <bits/stdc++.h>

int v, e, tmp;
std::vector<std::vector<int>> adjMatrix, reverse_adjMatrix, res; // 그래프, 역방향 그래프
std::vector<bool> visited;
std::stack<int> S;

void dfs(int n)
{
    if(visited[n])
        return;
    visited[n] = true;
    for(auto i : adjMatrix[n])
        dfs(i);
    S.push(n);
    return;
}

void reverse_dfs(int n)
{
    if(visited[n])
        return;
    
    visited[n] = true;
    
    res[tmp].push_back(n);
    
    for(auto i: reverse_adjMatrix[n])
        reverse_dfs(i);
    return;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> v >> e;

    adjMatrix.resize(v + 1);
    reverse_adjMatrix.resize(v + 1);
    visited.resize(v + 1, false);

    for(int i = 0; i<e; i++)
    {
        int start, end;
        std::cin >> start >> end;
        
        adjMatrix[start].push_back(end);
        reverse_adjMatrix[end].push_back(start);
    }

    for(int i = 1; i<=v; i++)
        dfs(i);

    std::fill(visited.begin(), visited.end(), false);

    while(!S.empty())
    {
        if(!visited[S.top()])
        {
            res.push_back(std::vector<int>());
            reverse_dfs(S.top());
            ++tmp;
        }
        S.pop();
    }
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