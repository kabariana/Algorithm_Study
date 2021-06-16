#include <bits/stdc++.h>
#define MAX 1000

int n, m;
int match[MAX + 1];
bool visited[MAX + 1];
std::vector<std::vector<int>> v(MAX + 1);

bool dfs(int t)
{
    if(visited[t])
        return 0;
    visited[t] = true;

    for(int i = 0; i < v[t].size(); i++)
    {
        int work = v[t][i];
        if(!match[work] || dfs(match[work]))
        {
            match[work] = t;
            return 1;
        }
    }
    return 0;
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        int c;
        std::cin >> c;
        for(int j = 0; j < c; j++)
        {
            int tmp;
            std::cin >> tmp;
            v[i].push_back(tmp);
        }
    }
    int cnt = 0;
    for(int i = 1; i<= n; i++){
        memset(visited, 0, MAX + 1);
        if(dfs(i))
            cnt++;
    }
    std::cout << cnt << '\n';
    return 0;
}