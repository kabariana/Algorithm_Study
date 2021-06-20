#include <bits/stdc++.h>

typedef struct{
    int y, x;
}Point;

Point dxy[4] = {{-1, 0}, {0, -1}, {0, 1}, {1, 0}};

typedef struct
{
    int time, y, x;
}tmp;

bool operator<(const tmp& p, const tmp& q)
{
    if(p.time > q.time)
        return true;
    else if(p.time == q.time && p.y > q.y)
        return true;
    else if(p.time == q.time && p.y == q.y && p.x > q.x)    
        return true;
    return false;
}

int map[20][20];
bool visited[20][20];

int N;

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;

    std::pair<int, int> begin;
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<N; j++)
        {
            std::cin >> map[i][j];

            if(map[i][j] == 9) // 상어의 위치
            {
                begin = {i, j};
                map[i][j] = 0;
            }
        }
    }

    std::queue<std::pair<std::pair<int, int>, int>> q;
    q.push({{begin}, 2}); // 시작 
    int accumul = 0;
    int cnt = 0;

    while(!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int size = q.front().second;
        q.pop();

        memset(visited, false, sizeof(visited));
        std::priority_queue<tmp> u;
        u.push({0, y, x});
        visited[y][x] = true;

        while(!u.empty())
        {
            int s = u.size();
            std::priority_queue<std::pair<std::pair<int, int>, int>, std::vector<std::pair<std::pair<int, int>, int>>, std::greater<std::pair<std::pair<int, int>, int>>> pq;
            for(int i = 0; i < s; i++)
            {
                int currentY = u.top().y;
                int currentX = u.top().x;
                int currentTime = u.top().time;
                u.pop();

                for(int j = 0; j < 4; j++)
                {
                    int nextY = currentY + dxy[j].y;
                    int nextX = currentX + dxy[j].x;

                    if(nextY >= 0 && nextX >= 0 && nextY < N && nextX < N)
                    {
                        if(!visited[nextY][nextX])
                        {
                            if(map[nextY][nextX] <= size)
                            {
                                u.push({currentTime+1, nextY, nextX});
                                visited[nextY][nextX] = true;
                                if(1 <= map[nextY][nextX] && map[nextY][nextX] < size)
                                    pq.push({{nextY, nextX}, currentTime + 1});
                            }
                        }
                    }
                }
            }
            if(!pq.empty())
            {
                cnt++;
                if(cnt == size)
                {
                    q.push({{pq.top().first}, size + 1});
                    cnt = 0;
                }
                else
                    q.push({{pq.top().first}, size});

                map[pq.top().first.first][pq.top().first.second] = 0;
                accumul += pq.top().second;
                break;
            }
        }
    }
    std::cout << accumul <<'\n';
    return 0;
}