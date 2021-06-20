#include <bits/stdc++.h>

int N, M;
bool visited[101];
std::vector<std::pair<int, int>> v;

void bfs()
{
    int cnt = 0;
    std::queue<int> q;
    q.push(1);

    while(!q.empty())
    {
        int size = q.size();
        for(int i = 0; i<size; i++)
        {
            int x = q.front();
            q.pop();
            if(x == 100)
            {
                std::cout << cnt << '\n';
                return;
            }
            for(int j = 0; j< N + M; j++)
                if(x == v[j].first)
                    x = v[j].second;
            for(int j = 1; j<= 6; j++)
            {
                if(!visited[x + j] && x + j < 101)
                {
                    q.push(x + j);
                    visited[x + j] = true;
                }
            }
        }
        cnt++;
    }
}

int main(int argc, char* argv[])
{   
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N >> M;

    for(int i = 0; i<N + M; i++)
    {
        int x, y;
        std::cin >> x >> y;
        v.push_back({x, y});
    }
    bfs();

    return 0;
}