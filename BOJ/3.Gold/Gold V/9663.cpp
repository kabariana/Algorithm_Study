// 겁나 유명한 문제
#include <bits/stdc++.h>

int N;
int result = 0;
bool visited[14][14];

bool chk(int x, int cnt)
{
    for(int i = 0; i<cnt; i++)
        if(visited[x][i])
            return false;
    
    for(int i = cnt - 1, j = x - 1; j >= 0; i--, j--)
        if(visited[j][i])
            return false;
    
    for(int i = cnt - 1, j = x + 1; j < N; i--, j++)
        if(visited[j][i])
            return false;

    return true;
}

void dfs(int n)
{
    if(n == N)
    {
        result++;
        return;
    }

    for(int i = 0; i<N; i++)
    {
        if(!visited[i][n] && chk(i, n))
        {
            visited[i][n] = true;
            dfs(n+1);
            visited[i][n] = false;
        }
    }
}

int main(int argc, char* argv[])
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr), std::cout.tie(nullptr);

    std::cin >> N;

    dfs(0);

    std::cout << result <<'\n';
    return 0;
}