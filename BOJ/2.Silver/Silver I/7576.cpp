#include <bits/stdc++.h>
#define MAX 1000

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};
int map[MAX][MAX];

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    int M, N, res = 0;
    std::queue<int> q;

    std::cin >> M >> N;

    int cnt = 0;
    
    for(int i = 0; i<N; i++)
    {
        for(int j = 0; j<M; j++)
        {
            std::cin >> map[i][j];
            if(map[i][j] >= 0) 
                cnt++;
            if(map[i][j] == 1)
                q.push(i*MAX + j);
        }
    }

    while(!q.empty())
    {
        res++;
        int size = q.size();
        for(int i = 0; i < size; i++)
        {
            int x = q.front()/1000;
            int y = q.front()%1000;
            q.pop();

            cnt--;
            for(int j = 0; j<4; j++)
            {
                int newY = y + dy[j];
                int newX = x + dx[j];

                if(newY < 0 || newX < 0 || newX >= N || newY >= M || map[newX][newY] != 0)
                    continue;
                map[newX][newY] = 1;
                q.push(newX*1000 + newY);
            }
        }
        if(cnt == 0)
            break;
    }

    std::cout << (cnt?-1:res-1);
    return 0;
}