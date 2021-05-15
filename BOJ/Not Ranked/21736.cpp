// BFS
#include <bits/stdc++.h>
using namespace std;

char arr[601][601];
int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
bool visited[601][601];
int N, M, tmp_x, tmp_y, res;

void bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[y][x] = true;
    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;

        q.pop();
        if(arr[y][x] == 'P')
            res++;
        for(int i = 0; i<4; i++)
        {
            int newX = x + dx[i];
            int newY = y + dy[i];
            if(newX >= 0 && newY >= 0 && newX < M && newY <N)
            {
                if(!visited[newY][newX] && arr[newY][newX] != 'X')
                {
                    visited[newY][newX] = true;
                    q.push({newX, newY});
                }
            }
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);

    cin >> N >> M;
    for(int i = 0; i<N; i++)
    {
        string str;
        cin >> str;
        for(int j = 0; j <M; j++)
        {
            arr[i][j] = str[j];
            if(arr[i][j]== 'I')
            {
                tmp_y = i;
                tmp_x = j;
            }

        }
    }
    bfs(tmp_x, tmp_y);
    if(!res)
        cout <<"TT\n";
    else
        cout << res <<'\n';
    return 0;
}