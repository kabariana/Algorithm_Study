// 보나마나 BFS 문제
#include <bits/stdc++.h>
using pii = std::pair<int, int>;

const int SIZE = 300 + 1;

int map[SIZE][SIZE];
bool visited[SIZE][SIZE];

const int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dy[] = {2, 1, -1, -2, -2, -1, 1, 2};

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int TC;
    std::cin >> TC;

    while(TC--)
    {
        int l;
        std::cin >> l;
        int start_x, start_y;
        std::cin >> start_x >> start_y;

        int goal_x, goal_y;
        std::cin >> goal_x >> goal_y;

        std::queue<pii> q;
        visited[start_x][start_y] = true;
        q.push({start_x, start_y});

        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(x == goal_x && y == goal_y)
            {
                std::cout << map[x][y] << '\n';
                memset(map, 0, sizeof(map));
                memset(visited, false, sizeof(visited));
                break;
            }

            for(int i = 0; i<8; i++)
            {
                int newX = x + dx[i];
                int newY = y + dy[i];

                if(newX >= 0 && newX < l && newY >= 0 && newY < l)
                {
                    if(!visited[newX][newY]) 
                    {
                        visited[newX][newY] = true;
                        map[newX][newY] = map[x][y] + 1;
                        q.push({newX, newY});
                    }
                }
            }
        }
    }
    return 0; 
}