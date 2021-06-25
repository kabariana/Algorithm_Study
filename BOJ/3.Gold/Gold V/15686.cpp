#include <bits/stdc++.h>

const int INF = 987654321;
int map[50][50];
std::vector<std::pair<int, int>> home, chicken;
bool visited[13];

int N, M, result;

int dist(std::pair<int, int> a, std::pair<int, int> b)
{
    return std::abs(a.first - b.first) + abs(a.second - b.second);
}

void dfs(int index, int selection)
{
    if(selection == M)
    {
        int tmp = 0;
        for(int i = 0; i< home.size(); i++)
        {
            int tmpDist = INF;
            for(int j = 0; j<chicken.size(); j++)
            {
                if(visited[j])
                    tmpDist = std::min(tmpDist, dist(home[i], chicken[j]));
            }
            tmp += tmpDist;
        }
        result = std::min(result, tmp);
        return;
    }
    if(index == chicken.size())
        return;

    visited[index] = true;
    dfs(index + 1, selection+1);
    visited[index] = false;
    dfs(index + 1, selection);
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            std::cin >> map[i][j];
            if(map[i][j] == 1)
                home.push_back({i, j});
            if(map[i][j] == 2)
                chicken.push_back({i, j});
        }
    }
    result = INF;
    dfs(0, 0);
    std::cout << result << '\n';
    return 0;
}