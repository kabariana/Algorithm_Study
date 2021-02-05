// 처음에 짠 코드도 맞는 코드인데... std::ios_base::sync_with_stdio(false); 에 의하여 틀렸다고 나옴.
#include <bits/stdc++.h>

int n, m;
int graph[101][101];
std::string arr[101];

int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int bfs(int start_x, int start_y)
{
    std::queue<std::pair<int, int>> q;
    q.push({start_x, start_y});

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++)
        {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx < 0 || nx >= n || ny < 0 || ny >= m) 
                continue;
            if(graph[nx][ny] == 0) 
                continue;
            if(graph[nx][ny] == 1){
                graph[nx][ny] = graph[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }
    return graph[n-1][m-1];
}

int main(int argc, char* argv[])
{
	std::cin>>n>>m;
	for(int i=0; i<n; i++)
    {
		for(int j=0; j<m; j++)
        {
			scanf("%1d", &graph[i][j]);
		}
	}
	
	std::cout<<bfs(0,0);
    return 0;
}